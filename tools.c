#include "tools.h"
#include "ips.h"
#include "types.h"

void uart0init(uint32 systemClockKHz, uint32 baudRate)
{
	uint16 ubgs;
	
 	MCF_UART_UCR(0)  = MCF_UART_UCR_RESET_TX;	//reset Reciever
 	MCF_UART_UCR(0)  = MCF_UART_UCR_RESET_RX;	//reset Transiever
 	MCF_UART_UCR(0)  = MCF_UART_UCR_RESET_MR;	//reset mode Pointer
	MCF_UART_UIMR(0) = MCF_UART_UIMR_RXRDY_FU;  // configures interrupt on RX	   //added interrupthandling
 	MCF_UART_UACR(0) = 0;							//disable COS  Interrupts
 	ubgs = (uint16)((systemClockKHz * 1000)/(baudRate * 32));
  	MCF_UART_UBG1(0) = ((ubgs >> 8) & 0xFF);		//set baudrate
 	MCF_UART_UBG2(0) = (ubgs & 0xFF);				//set baudrate
	MCF_UART_UCSR(0) = MCF_UART_UCSR_RCS_SYS_CLK | MCF_UART_UCSR_TCS_SYS_CLK; //use Prescaled Internal Clock as Source
	MCF_UART_UMR(0)  = (MCF_UART_UMR_BC_8 | MCF_UART_UMR_PM_NONE) & ~ MCF_UART_UMR_RXIRQ; // Set UMR1 to 8 Bit No Parity and interrupt to RXFULL Points now to UMR2 
	MCF_UART_UMR(0)  = MCF_UART_UMR_SB_STOP_BITS_1 | MCF_UART_UMR_CM_NORMAL; // Set UMR2 to 1 Stopbit with channlemode Normal
	MCF_UART_UCR(0)  = MCF_UART_UCR_RX_ENABLED | MCF_UART_UCR_TX_ENABLED; // Enable TX/RX
}

void systeminit()
{
	//Fix PLL Instability Bug. 
	(*(vuint8 *)(0x40120006)) |= 0x04;
    // set SCM_IPSBAR to __IPSBAR and Enable (1)
	MCF_SCM_IPSBAR = MCF_SCM_IPSBAR_BA(__IPSBAR) | MCF_SCM_IPSBAR_V;
    // set UART0 memory to Supervisor/User R/W 
	MCF_SACU_PACR2 = MCF_SACU_PACR_AC1(MCF_SACU_PACR_AC_RW_RW); // removed lock ... Caused Accesserror ISRs 
    // set UART0 pins in UART Mode ... while UART is the standartusage of pin GPIO is the resetvalue of controlregister
	MCF_GPIO_PUAPAR =  MCF_GPIO_PUAPAR_CTS0_CTS0 | MCF_GPIO_PUAPAR_RTS0_RTS0 | MCF_GPIO_PUAPAR_RXD0_RXD0 | MCF_GPIO_PUAPAR_TXD0_TXD0;


    MCF_INTC_ICR(13) = MCF_INTC_ICR_IP(7) | MCF_INTC_ICR_IL(7); //set interrupt level and priority to 7 for uart0 interrupt (13)
	MCF_INTC_IMRL = ~((1 << 13) | 1);				//unmasking uart0 (13) interrupt and disable mask all bit
//  	_ASMLINE(" MOVE.W #$3000,SR ");					//unmasking interrupts in Statusregister		
// using interupt level 7 (ICR_IL) removes the line above 
}

uint8 readUART()
{
	while (!(MCF_UART_USR(0) & MCF_UART_USR_RXRDY));    //lock while reciverbuffer empty
	return MCF_UART_URB(0);                             //return symbol from recivebuffer
}

void writeUART(uint8 zeichen)
{
	while (!(MCF_UART_USR(0) & MCF_UART_USR_TXRDY));    //lock while transmitterbuffer full
	MCF_UART_UTB(0) = zeichen;                          //write symbol in transmitterbuffer
}

void writeLine(char *line)
{
int i=0;
    while (line[i] != 0) {                            //while current symbol not NULL
        writeUART(line[i++]);                               //write symbol to UART and increment symbolindex
    }
}