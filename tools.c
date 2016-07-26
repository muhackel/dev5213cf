#include "tools.h"
#include "ips.h"
#include "types.h"

void uart0init(uint32 systemClockKHz, uint32 baudRate)
{
	uint16 ubgs;
	writeByte(UCR0,  0x30);	//reset Reciever
	writeByte(UCR0,  0x20);	//reset Transiever
	writeByte(UCR0,  0x10);	//reset mode Pointer
    writeByte(UACR0, 0x00); //disable Interrupts
 	ubgs = (uint16)((systemClockKHz * 1000)/(baudRate * 32));
  	writeByte(UBG10,(ubgs >> 8) & 0xFF);		//set baudrate MSB
 	writeByte(UBG20, ubgs & 0xFF);				//set baudrate LSB
	writeByte(UCSR0, 0xDD); //use Prescaled Internal Clock as Source
	writeByte(UMR10, 0x13);	// Set UMR01 to 8 Bit No Parity Points now to UMR02
	writeByte(UMR20, 0x07); // Set UMR02 to 1 Stopbit with channlemode Normal
	writeByte(UCR0,  0x05); // Enable TX/RX
}

void systeminit()
{
	//Fix PLL Instability Bug. 
	(*(vuint8 *)(0x40120006)) |= 0x04;
    // set SCM_IPSBAR to __IPSBAR and Enable (1)
	writeLong(0x40000000, 0x40000001);
	// set UART0 memory to Supervisor/User R/W 
	writeByte(0x40000026, 0x60);
	// set UART0 pins in UART Mode ... while UART is the standartusage of pin GPIO is the resetvalue of controlregister
	writeByte(0x40100059, 0x55);
}

uint8 readUART()
{
	while (!(readByte(USR0) & 0x01));    //lock while reciverbuffer empty
	return readByte(URB0);             //return symbol from recivebuffer
}

void writeUART(uint8 zeichen)
{
	while (!(readByte(USR0) & 0x04));    //lock while transmitterbuffer full
	writeByte(UTB0, zeichen);           //write symbol in transmitterbuffer
}

void writeLine(char *line)
{
int i=0;
    while (line[i] != 0) {                            //while current symbol not NULL
        writeUART(line[i++]);                               //write symbol to UART and increment symbolindex
    }
}

void writeByte(uint32 adr, uint8 value)
{
   *((vuint8*)(adr)) = value;
}

void writeWord(uint32 adr, uint16 value)
{
	*((vuint16*)(adr)) = value;
}

void writeLong(uint32 adr, uint32 value)
{
   *((vuint32*)(adr)) = value;
}

uint8 readByte(uint32 adr)
{
	return (*((vuint8*)(adr)));
}

uint16 readWord(uint32 adr)
{
	return (*((vuint16*)(adr)));
}

uint32 readLong(uint32 adr)
{
	return (*((vuint32*)(adr)));
}