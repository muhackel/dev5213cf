/**
 * Register and Bitdefinitions of the Integrated Periferal Systen (IPS)
 * 
 * Currently Implemented Subsystems:
 * SCM      - System Control Module
 * SACU     - System Access Control Unit
 * UART     - Universal Asynchronous Reciver/Transmitter Module
 * GPIO     - General Purpose Input Output Module
**/
#ifndef IPS_H
#define IPS_H
     
// Integrated Periferal System Base Adress Register initial Value
#define __IPSBAR	0x40000000


//System Control Module Register
#define MCF_SCM_IPSBAR		(*(vuint32*)(__IPSBAR + 0x0000))
#define MCF_SCM_RAMBAR		(*(vuint32*)(__IPSBAR + 0x0008))
#define MCF_SCM_PPMRH		(*(vuint32*)(__IPSBAR + 0x000C))
#define MCF_SCM_CRSR		(*(vuint8 *)(__IPSBAR + 0x0010))
#define MCF_SCM_CWCR		(*(vuint8 *)(__IPSBAR + 0x0011))
#define MCF_SCM_LPICR		(*(vuint8 *)(__IPSBAR + 0x0012))
#define MCF_SCM_CWSR		(*(vuint8 *)(__IPSBAR + 0x0013))
#define MCF_SCM_DMAREQC		(*(vuint32*)(__IPSBAR + 0x0014))
#define MCF_SCM_PPMRL		(*(vuint32*)(__IPSBAR + 0x0018))
#define MCF_SCM_MPARK		(*(vuint32*)(__IPSBAR + 0x001C))


//System Access Control Register
#define MCF_SACU_MPR		(*(vuint8 *)(__IPSBAR + 0x0020))
#define MCF_SACU_PPMRS		(*(vuint8 *)(__IPSBAR + 0x0021))
#define MCF_SACU_PPMRC		(*(vuint8 *)(__IPSBAR + 0x0022))
#define MCF_SACU_IPSBMT		(*(vuint8 *)(__IPSBAR + 0x0023))
#define MCF_SACU_PARC0		(*(vuint8 *)(__IPSBAR + 0x0024))
#define MCF_SACU_PARC1		(*(vuint8 *)(__IPSBAR + 0x0025))
#define MCF_SACU_PARC2		(*(vuint8 *)(__IPSBAR + 0x0026))
#define MCF_SACU_PARC3		(*(vuint8 *)(__IPSBAR + 0x0027))
#define MCF_SACU_PARC4		(*(vuint8 *)(__IPSBAR + 0x0028))
#define MCF_SACU_PARC5		(*(vuint8 *)(__IPSBAR + 0x0029))
#define MCF_SACU_PARC6		(*(vuint8 *)(__IPSBAR + 0x002A))
#define MCF_SACU_PARC7		(*(vuint8 *)(__IPSBAR + 0x002B))
#define MCF_SACU_PARC8		(*(vuint8 *)(__IPSBAR + 0x002C))
#define MCF_SACU_GPARC0		(*(vuint8 *)(__IPSBAR + 0x0030))
#define MCF_SACU_GPARC1		(*(vuint8 *)(__IPSBAR + 0x0031))


//UART Register
#define MCF_UART_UMR(x)		(*(vuint8 *)(__IPSBAR +0x000200+((x)*0x040)))
#define MCF_UART_USR(x)		(*(vuint8 *)(__IPSBAR +0x000204+((x)*0x040)))
#define MCF_UART_UCSR(x)	(*(vuint8 *)(__IPSBAR +0x000204+((x)*0x040)))
#define MCF_UART_UCR(x)     (*(vuint8 *)(__IPSBAR +0x000208+((x)*0x040)))
#define MCF_UART_URB(x)     (*(vuint8 *)(__IPSBAR +0x00020C+((x)*0x040)))
#define MCF_UART_UTB(x)     (*(vuint8 *)(__IPSBAR +0x00020C+((x)*0x040)))
#define MCF_UART_UIPCR(x)   (*(vuint8 *)(__IPSBAR +0x000210+((x)*0x040)))
#define MCF_UART_UACR(x)    (*(vuint8 *)(__IPSBAR +0x000210+((x)*0x040)))
#define MCF_UART_UISR(x)    (*(vuint8 *)(__IPSBAR +0x000214+((x)*0x040)))
#define MCF_UART_UIMR(x)    (*(vuint8 *)(__IPSBAR +0x000214+((x)*0x040)))
#define MCF_UART_UBG1(x)    (*(vuint8 *)(__IPSBAR +0x000218+((x)*0x040)))
#define MCF_UART_UBG2(x)    (*(vuint8 *)(__IPSBAR +0x00021C+((x)*0x040)))
#define MCF_UART_UIP(x)     (*(vuint8 *)(__IPSBAR +0x000234+((x)*0x040)))
#define MCF_UART_UOP1(x)    (*(vuint8 *)(__IPSBAR +0x000238+((x)*0x040)))
#define MCF_UART_UOP0(x)    (*(vuint8 *)(__IPSBAR +0x00023C+((x)*0x040)))

// GPIO Register 
#define MCF_GPIO_PORTNQ     (*(vuint8 *)(__IPSBAR + 0x100008))
#define MCF_GPIO_PORTDD     (*(vuint8 *)(__IPSBAR + 0x100009))
#define MCF_GPIO_PORTAN     (*(vuint8 *)(__IPSBAR + 0x10000A))
#define MCF_GPIO_PORTAS     (*(vuint8 *)(__IPSBAR + 0x10000B))
#define MCF_GPIO_PORTQS     (*(vuint8 *)(__IPSBAR + 0x10000D))
#define MCF_GPIO_PORTTA     (*(vuint8 *)(__IPSBAR + 0x10000E))
#define MCF_GPIO_PORTTC     (*(vuint8 *)(__IPSBAR + 0x10000F))
#define MCF_GPIO_PORTTD     (*(vuint8 *)(__IPSBAR + 0x100010))
#define MCF_GPIO_PORTUA     (*(vuint8 *)(__IPSBAR + 0x100011))
#define MCF_GPIO_PORTUB     (*(vuint8 *)(__IPSBAR + 0x100012))
#define MCF_GPIO_PORTUC     (*(vuint8 *)(__IPSBAR + 0x100013))

#define MCF_GPIO_DDRNQ      (*(vuint8 *)(__IPSBAR + 0x10001C))
#define MCF_GPIO_DDRDD      (*(vuint8 *)(__IPSBAR + 0x10001D))
#define MCF_GPIO_DDRAN      (*(vuint8 *)(__IPSBAR + 0x10001E))
#define MCF_GPIO_DDRAS      (*(vuint8 *)(__IPSBAR + 0x10001F))
#define MCF_GPIO_DDRQS      (*(vuint8 *)(__IPSBAR + 0x100021))
#define MCF_GPIO_DDRTA      (*(vuint8 *)(__IPSBAR + 0x100022))
#define MCF_GPIO_DDRTC      (*(vuint8 *)(__IPSBAR + 0x100023))
#define MCF_GPIO_DDRTD      (*(vuint8 *)(__IPSBAR + 0x100024))
#define MCF_GPIO_DDRUA      (*(vuint8 *)(__IPSBAR + 0x100025))
#define MCF_GPIO_DDRUB      (*(vuint8 *)(__IPSBAR + 0x100026))
#define MCF_GPIO_DDRUC      (*(vuint8 *)(__IPSBAR + 0x100027))

#define MCF_GPIO_SETNQ      (*(vuint8 *)(__IPSBAR + 0x100030))
#define MCF_GPIO_SETDD      (*(vuint8 *)(__IPSBAR + 0x100031))
#define MCF_GPIO_SETAN      (*(vuint8 *)(__IPSBAR + 0x100032))
#define MCF_GPIO_SETAS      (*(vuint8 *)(__IPSBAR + 0x100033))
#define MCF_GPIO_SETQS      (*(vuint8 *)(__IPSBAR + 0x100035))
#define MCF_GPIO_SETTA      (*(vuint8 *)(__IPSBAR + 0x100036))
#define MCF_GPIO_SETTC      (*(vuint8 *)(__IPSBAR + 0x100037))
#define MCF_GPIO_SETTD      (*(vuint8 *)(__IPSBAR + 0x100038))
#define MCF_GPIO_SETUA      (*(vuint8 *)(__IPSBAR + 0x100039))
#define MCF_GPIO_SETUB      (*(vuint8 *)(__IPSBAR + 0x10003A))
#define MCF_GPIO_SETUC      (*(vuint8 *)(__IPSBAR + 0x10003B))

#define MCF_GPIO_PORTNQP    (*(vuint8 *)(__IPSBAR + 0x100030))
#define MCF_GPIO_PORTDDP    (*(vuint8 *)(__IPSBAR + 0x100031))
#define MCF_GPIO_PORTANP    (*(vuint8 *)(__IPSBAR + 0x100032))
#define MCF_GPIO_PORTASP    (*(vuint8 *)(__IPSBAR + 0x100033))
#define MCF_GPIO_PORTQSP    (*(vuint8 *)(__IPSBAR + 0x100035))
#define MCF_GPIO_PORTTAP    (*(vuint8 *)(__IPSBAR + 0x100036))
#define MCF_GPIO_PORTTCP    (*(vuint8 *)(__IPSBAR + 0x100037))
#define MCF_GPIO_PORTTDP    (*(vuint8 *)(__IPSBAR + 0x100038))
#define MCF_GPIO_PORTUAP    (*(vuint8 *)(__IPSBAR + 0x100039))
#define MCF_GPIO_PORTUBP    (*(vuint8 *)(__IPSBAR + 0x10003A))
#define MCF_GPIO_PORTUCP    (*(vuint8 *)(__IPSBAR + 0x10003B))

#define MCF_GPIO_CLRNQ      (*(vuint8 *)(__IPSBAR + 0x100044))
#define MCF_GPIO_CLRDD      (*(vuint8 *)(__IPSBAR + 0x100045))
#define MCF_GPIO_CLRAN      (*(vuint8 *)(__IPSBAR + 0x100046))
#define MCF_GPIO_CLRAS      (*(vuint8 *)(__IPSBAR + 0x100047))
#define MCF_GPIO_CLRQS      (*(vuint8 *)(__IPSBAR + 0x100049))
#define MCF_GPIO_CLRTA      (*(vuint8 *)(__IPSBAR + 0x10004A))
#define MCF_GPIO_CLRTC      (*(vuint8 *)(__IPSBAR + 0x10004B))
#define MCF_GPIO_CLRTD      (*(vuint8 *)(__IPSBAR + 0x10004C))
#define MCF_GPIO_CLRUA      (*(vuint8 *)(__IPSBAR + 0x10004D))
#define MCF_GPIO_CLRUB      (*(vuint8 *)(__IPSBAR + 0x10004E))
#define MCF_GPIO_CLRUC      (*(vuint8 *)(__IPSBAR + 0x10004F))

#define MCF_GPIO_PNQPAR     (*(vuint8 *)(__IPSBAR + 0x100050))
#define MCF_GPIO_PDDPAR     (*(vuint8 *)(__IPSBAR + 0x100051))
#define MCF_GPIO_PANPAR     (*(vuint8 *)(__IPSBAR + 0x100052))
#define MCF_GPIO_PASPAR     (*(vuint8 *)(__IPSBAR + 0x100053))
#define MCF_GPIO_PQSPAR     (*(vuint16*)(__IPSBAR + 0x100054))
#define MCF_GPIO_PTAPAR     (*(vuint8 *)(__IPSBAR + 0x100056))
#define MCF_GPIO_PTCPAR     (*(vuint8 *)(__IPSBAR + 0x100057))
#define MCF_GPIO_PTDPAR     (*(vuint8 *)(__IPSBAR + 0x100058))
#define MCF_GPIO_PUAPAR     (*(vuint8 *)(__IPSBAR + 0x100059))
#define MCF_GPIO_PUBPAR     (*(vuint8 *)(__IPSBAR + 0x10005A))
#define MCF_GPIO_PUCPAR     (*(vuint8 *)(__IPSBAR + 0x10005B))

#define MCF_GPIO_PSRR       (*(vuint32*)(__IPSBAR + 0x100078))
#define MCF_GPIO_PDSR       (*(vuint32*)(__IPSBAR + 0x10007C))


/* Bit definitions and macros for MCF_UART_UMR */
#define MCF_UART_UMR_BC(x)            (((x)&0x03)<<0)
#define MCF_UART_UMR_PT               (0x04)
#define MCF_UART_UMR_PM(x)            (((x)&0x03)<<3)
#define MCF_UART_UMR_ERR              (0x20)
#define MCF_UART_UMR_RXIRQ            (0x40)
#define MCF_UART_UMR_RXRTS            (0x80)
#define MCF_UART_UMR_SB(x)            (((x)&0x0F)<<0)
#define MCF_UART_UMR_TXCTS            (0x10)
#define MCF_UART_UMR_TXRTS            (0x20)
#define MCF_UART_UMR_CM(x)            (((x)&0x03)<<6)
#define MCF_UART_UMR_PM_MULTI_ADDR    (0x1C)
#define MCF_UART_UMR_PM_MULTI_DATA    (0x18)
#define MCF_UART_UMR_PM_NONE          (0x10)
#define MCF_UART_UMR_PM_FORCE_HI      (0x0C)
#define MCF_UART_UMR_PM_FORCE_LO      (0x08)
#define MCF_UART_UMR_PM_ODD           (0x04)
#define MCF_UART_UMR_PM_EVEN          (0x00)
#define MCF_UART_UMR_BC_5             (0x00)
#define MCF_UART_UMR_BC_6             (0x01)
#define MCF_UART_UMR_BC_7             (0x02)
#define MCF_UART_UMR_BC_8             (0x03)
#define MCF_UART_UMR_CM_NORMAL        (0x00)
#define MCF_UART_UMR_CM_ECHO          (0x40)
#define MCF_UART_UMR_CM_LOCAL_LOOP    (0x80)
#define MCF_UART_UMR_CM_REMOTE_LOOP   (0xC0)
#define MCF_UART_UMR_SB_STOP_BITS_1   (0x07)
#define MCF_UART_UMR_SB_STOP_BITS_15  (0x08)
#define MCF_UART_UMR_SB_STOP_BITS_2   (0x0F)

/* Bit definitions and macros for MCF_UART_USR */
#define MCF_UART_USR_RXRDY            (0x01)
#define MCF_UART_USR_FFULL            (0x02)
#define MCF_UART_USR_TXRDY            (0x04)
#define MCF_UART_USR_TXEMP            (0x08)
#define MCF_UART_USR_OE               (0x10)
#define MCF_UART_USR_PE               (0x20)
#define MCF_UART_USR_FE               (0x40)
#define MCF_UART_USR_RB               (0x80)

/* Bit definitions and macros for MCF_UART_UCSR */
#define MCF_UART_UCSR_TCS(x)          (((x)&0x0F)<<0)
#define MCF_UART_UCSR_RCS(x)          (((x)&0x0F)<<4)
#define MCF_UART_UCSR_RCS_SYS_CLK     (0xD0)
#define MCF_UART_UCSR_RCS_CTM16       (0xE0)
#define MCF_UART_UCSR_RCS_CTM         (0xF0)
#define MCF_UART_UCSR_TCS_SYS_CLK     (0x0D)
#define MCF_UART_UCSR_TCS_CTM16       (0x0E)
#define MCF_UART_UCSR_TCS_CTM         (0x0F)

/* Bit definitions and macros for MCF_UART_UCR */
#define MCF_UART_UCR_RXC(x)           (((x)&0x03)<<0)
#define MCF_UART_UCR_TXC(x)           (((x)&0x03)<<2)
#define MCF_UART_UCR_MISC(x)          (((x)&0x07)<<4)
#define MCF_UART_UCR_NONE             (0x00)
#define MCF_UART_UCR_STOP_BREAK       (0x70)
#define MCF_UART_UCR_START_BREAK      (0x60)
#define MCF_UART_UCR_BKCHGINT         (0x50)
#define MCF_UART_UCR_RESET_ERROR      (0x40)
#define MCF_UART_UCR_RESET_TX         (0x30)
#define MCF_UART_UCR_RESET_RX         (0x20)
#define MCF_UART_UCR_RESET_MR         (0x10)
#define MCF_UART_UCR_TX_DISABLED      (0x08)
#define MCF_UART_UCR_TX_ENABLED       (0x04)
#define MCF_UART_UCR_RX_DISABLED      (0x02)
#define MCF_UART_UCR_RX_ENABLED       (0x01)

/* Bit definitions and macros for MCF_UART_UIPCR */
#define MCF_UART_UIPCR_CTS            (0x01)
#define MCF_UART_UIPCR_COS            (0x10)

/* Bit definitions and macros for MCF_UART_UACR */
#define MCF_UART_UACR_IEC             (0x01)

/* Bit definitions and macros for MCF_UART_UISR */
#define MCF_UART_UISR_TXRDY           (0x01)
#define MCF_UART_UISR_RXRDY_FU        (0x02)
#define MCF_UART_UISR_DB              (0x04)
#define MCF_UART_UISR_RXFTO           (0x08)
#define MCF_UART_UISR_TXFIFO          (0x10)
#define MCF_UART_UISR_RXFIFO          (0x20)
#define MCF_UART_UISR_COS             (0x80)

/* Bit definitions and macros for MCF_UART_UIMR */
#define MCF_UART_UIMR_TXRDY           (0x01)
#define MCF_UART_UIMR_RXRDY_FU        (0x02)
#define MCF_UART_UIMR_DB              (0x04)
#define MCF_UART_UIMR_COS             (0x80)

/* Bit definitions and macros for MCF_UART_UIP */
#define MCF_UART_UIP_CTS              (0x01)

/* Bit definitions and macros for MCF_UART_UOP1 */
#define MCF_UART_UOP1_RTS             (0x01)

/* Bit definitions and macros for MCF_UART_UOP0 */
#define MCF_UART_UOP0_RTS             (0x01)

/* Bit definitions and macros for MCF_GPIO_PORTNQ */
#define MCF_GPIO_PORTNQ_PORTNQ0     (0x01)
#define MCF_GPIO_PORTNQ_PORTNQ1     (0x02)
#define MCF_GPIO_PORTNQ_PORTNQ2     (0x04)
#define MCF_GPIO_PORTNQ_PORTNQ3     (0x08)
#define MCF_GPIO_PORTNQ_PORTNQ4     (0x10)
#define MCF_GPIO_PORTNQ_PORTNQ5     (0x20)
#define MCF_GPIO_PORTNQ_PORTNQ6     (0x40)
#define MCF_GPIO_PORTNQ_PORTNQ7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTDD */
#define MCF_GPIO_PORTDD_PORTDD0     (0x01)
#define MCF_GPIO_PORTDD_PORTDD1     (0x02)
#define MCF_GPIO_PORTDD_PORTDD2     (0x04)
#define MCF_GPIO_PORTDD_PORTDD3     (0x08)
#define MCF_GPIO_PORTDD_PORTDD4     (0x10)
#define MCF_GPIO_PORTDD_PORTDD5     (0x20)
#define MCF_GPIO_PORTDD_PORTDD6     (0x40)
#define MCF_GPIO_PORTDD_PORTDD7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTAN */
#define MCF_GPIO_PORTAN_PORTAN0     (0x01)
#define MCF_GPIO_PORTAN_PORTAN1     (0x02)
#define MCF_GPIO_PORTAN_PORTAN2     (0x04)
#define MCF_GPIO_PORTAN_PORTAN3     (0x08)
#define MCF_GPIO_PORTAN_PORTAN4     (0x10)
#define MCF_GPIO_PORTAN_PORTAN5     (0x20)
#define MCF_GPIO_PORTAN_PORTAN6     (0x40)
#define MCF_GPIO_PORTAN_PORTAN7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTAS */
#define MCF_GPIO_PORTAS_PORTAS0     (0x01)
#define MCF_GPIO_PORTAS_PORTAS1     (0x02)
#define MCF_GPIO_PORTAS_PORTAS2     (0x04)
#define MCF_GPIO_PORTAS_PORTAS3     (0x08)
#define MCF_GPIO_PORTAS_PORTAS4     (0x10)
#define MCF_GPIO_PORTAS_PORTAS5     (0x20)
#define MCF_GPIO_PORTAS_PORTAS6     (0x40)
#define MCF_GPIO_PORTAS_PORTAS7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTQS */
#define MCF_GPIO_PORTQS_PORTQS0     (0x01)
#define MCF_GPIO_PORTQS_PORTQS1     (0x02)
#define MCF_GPIO_PORTQS_PORTQS2     (0x04)
#define MCF_GPIO_PORTQS_PORTQS3     (0x08)
#define MCF_GPIO_PORTQS_PORTQS4     (0x10)
#define MCF_GPIO_PORTQS_PORTQS5     (0x20)
#define MCF_GPIO_PORTQS_PORTQS6     (0x40)
#define MCF_GPIO_PORTQS_PORTQS7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTTA */
#define MCF_GPIO_PORTTA_PORTTA0     (0x01)
#define MCF_GPIO_PORTTA_PORTTA1     (0x02)
#define MCF_GPIO_PORTTA_PORTTA2     (0x04)
#define MCF_GPIO_PORTTA_PORTTA3     (0x08)
#define MCF_GPIO_PORTTA_PORTTA4     (0x10)
#define MCF_GPIO_PORTTA_PORTTA5     (0x20)
#define MCF_GPIO_PORTTA_PORTTA6     (0x40)
#define MCF_GPIO_PORTTA_PORTTA7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTTC */
#define MCF_GPIO_PORTTC_PORTTC0     (0x01)
#define MCF_GPIO_PORTTC_PORTTC1     (0x02)
#define MCF_GPIO_PORTTC_PORTTC2     (0x04)
#define MCF_GPIO_PORTTC_PORTTC3     (0x08)
#define MCF_GPIO_PORTTC_PORTTC4     (0x10)
#define MCF_GPIO_PORTTC_PORTTC5     (0x20)
#define MCF_GPIO_PORTTC_PORTTC6     (0x40)
#define MCF_GPIO_PORTTC_PORTTC7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTTD */
#define MCF_GPIO_PORTTD_PORTTD0     (0x01)
#define MCF_GPIO_PORTTD_PORTTD1     (0x02)
#define MCF_GPIO_PORTTD_PORTTD2     (0x04)
#define MCF_GPIO_PORTTD_PORTTD3     (0x08)
#define MCF_GPIO_PORTTD_PORTTD4     (0x10)
#define MCF_GPIO_PORTTD_PORTTD5     (0x20)
#define MCF_GPIO_PORTTD_PORTTD6     (0x40)
#define MCF_GPIO_PORTTD_PORTTD7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTUA */
#define MCF_GPIO_PORTUA_PORTUA0     (0x01)
#define MCF_GPIO_PORTUA_PORTUA1     (0x02)
#define MCF_GPIO_PORTUA_PORTUA2     (0x04)
#define MCF_GPIO_PORTUA_PORTUA3     (0x08)
#define MCF_GPIO_PORTUA_PORTUA4     (0x10)
#define MCF_GPIO_PORTUA_PORTUA5     (0x20)
#define MCF_GPIO_PORTUA_PORTUA6     (0x40)
#define MCF_GPIO_PORTUA_PORTUA7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTUB */
#define MCF_GPIO_PORTUB_PORTUB0     (0x01)
#define MCF_GPIO_PORTUB_PORTUB1     (0x02)
#define MCF_GPIO_PORTUB_PORTUB2     (0x04)
#define MCF_GPIO_PORTUB_PORTUB3     (0x08)
#define MCF_GPIO_PORTUB_PORTUB4     (0x10)
#define MCF_GPIO_PORTUB_PORTUB5     (0x20)
#define MCF_GPIO_PORTUB_PORTUB6     (0x40)
#define MCF_GPIO_PORTUB_PORTUB7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PORTUC */
#define MCF_GPIO_PORTUC_PORTUC0     (0x01)
#define MCF_GPIO_PORTUC_PORTUC1     (0x02)
#define MCF_GPIO_PORTUC_PORTUC2     (0x04)
#define MCF_GPIO_PORTUC_PORTUC3     (0x08)
#define MCF_GPIO_PORTUC_PORTUC4     (0x10)
#define MCF_GPIO_PORTUC_PORTUC5     (0x20)
#define MCF_GPIO_PORTUC_PORTUC6     (0x40)
#define MCF_GPIO_PORTUC_PORTUC7     (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRNQ */
#define MCF_GPIO_DDRNQ_DDRNQ0       (0x01)
#define MCF_GPIO_DDRNQ_DDRNQ1       (0x02)
#define MCF_GPIO_DDRNQ_DDRNQ2       (0x04)
#define MCF_GPIO_DDRNQ_DDRNQ3       (0x08)
#define MCF_GPIO_DDRNQ_DDRNQ4       (0x10)
#define MCF_GPIO_DDRNQ_DDRNQ5       (0x20)
#define MCF_GPIO_DDRNQ_DDRNQ6       (0x40)
#define MCF_GPIO_DDRNQ_DDRNQ7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRDD */
#define MCF_GPIO_DDRDD_DDRDD0       (0x01)
#define MCF_GPIO_DDRDD_DDRDD1       (0x02)
#define MCF_GPIO_DDRDD_DDRDD2       (0x04)
#define MCF_GPIO_DDRDD_DDRDD3       (0x08)
#define MCF_GPIO_DDRDD_DDRDD4       (0x10)
#define MCF_GPIO_DDRDD_DDRDD5       (0x20)
#define MCF_GPIO_DDRDD_DDRDD6       (0x40)
#define MCF_GPIO_DDRDD_DDRDD7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRAN */
#define MCF_GPIO_DDRAN_DDRAN0       (0x01)
#define MCF_GPIO_DDRAN_DDRAN1       (0x02)
#define MCF_GPIO_DDRAN_DDRAN2       (0x04)
#define MCF_GPIO_DDRAN_DDRAN3       (0x08)
#define MCF_GPIO_DDRAN_DDRAN4       (0x10)
#define MCF_GPIO_DDRAN_DDRAN5       (0x20)
#define MCF_GPIO_DDRAN_DDRAN6       (0x40)
#define MCF_GPIO_DDRAN_DDRAN7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRAS */
#define MCF_GPIO_DDRAS_DDRAS0       (0x01)
#define MCF_GPIO_DDRAS_DDRAS1       (0x02)
#define MCF_GPIO_DDRAS_DDRAS2       (0x04)
#define MCF_GPIO_DDRAS_DDRAS3       (0x08)
#define MCF_GPIO_DDRAS_DDRAS4       (0x10)
#define MCF_GPIO_DDRAS_DDRAS5       (0x20)
#define MCF_GPIO_DDRAS_DDRAS6       (0x40)
#define MCF_GPIO_DDRAS_DDRAS7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRQS */
#define MCF_GPIO_DDRQS_DDRQS0       (0x01)
#define MCF_GPIO_DDRQS_DDRQS1       (0x02)
#define MCF_GPIO_DDRQS_DDRQS2       (0x04)
#define MCF_GPIO_DDRQS_DDRQS3       (0x08)
#define MCF_GPIO_DDRQS_DDRQS4       (0x10)
#define MCF_GPIO_DDRQS_DDRQS5       (0x20)
#define MCF_GPIO_DDRQS_DDRQS6       (0x40)
#define MCF_GPIO_DDRQS_DDRQS7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRTA */
#define MCF_GPIO_DDRTA_DDRTA0       (0x01)
#define MCF_GPIO_DDRTA_DDRTA1       (0x02)
#define MCF_GPIO_DDRTA_DDRTA2       (0x04)
#define MCF_GPIO_DDRTA_DDRTA3       (0x08)
#define MCF_GPIO_DDRTA_DDRTA4       (0x10)
#define MCF_GPIO_DDRTA_DDRTA5       (0x20)
#define MCF_GPIO_DDRTA_DDRTA6       (0x40)
#define MCF_GPIO_DDRTA_DDRTA7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRTC */
#define MCF_GPIO_DDRTC_DDRTC0       (0x01)
#define MCF_GPIO_DDRTC_DDRTC1       (0x02)
#define MCF_GPIO_DDRTC_DDRTC2       (0x04)
#define MCF_GPIO_DDRTC_DDRTC3       (0x08)
#define MCF_GPIO_DDRTC_DDRTC4       (0x10)
#define MCF_GPIO_DDRTC_DDRTC5       (0x20)
#define MCF_GPIO_DDRTC_DDRTC6       (0x40)
#define MCF_GPIO_DDRTC_DDRTC7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRTD */
#define MCF_GPIO_DDRTD_DDRTD0       (0x01)
#define MCF_GPIO_DDRTD_DDRTD1       (0x02)
#define MCF_GPIO_DDRTD_DDRTD2       (0x04)
#define MCF_GPIO_DDRTD_DDRTD3       (0x08)
#define MCF_GPIO_DDRTD_DDRTD4       (0x10)
#define MCF_GPIO_DDRTD_DDRTD5       (0x20)
#define MCF_GPIO_DDRTD_DDRTD6       (0x40)
#define MCF_GPIO_DDRTD_DDRTD7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRUA */
#define MCF_GPIO_DDRUA_DDRUA0       (0x01)
#define MCF_GPIO_DDRUA_DDRUA1       (0x02)
#define MCF_GPIO_DDRUA_DDRUA2       (0x04)
#define MCF_GPIO_DDRUA_DDRUA3       (0x08)
#define MCF_GPIO_DDRUA_DDRUA4       (0x10)
#define MCF_GPIO_DDRUA_DDRUA5       (0x20)
#define MCF_GPIO_DDRUA_DDRUA6       (0x40)
#define MCF_GPIO_DDRUA_DDRUA7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRUB */
#define MCF_GPIO_DDRUB_DDRUB0       (0x01)
#define MCF_GPIO_DDRUB_DDRUB1       (0x02)
#define MCF_GPIO_DDRUB_DDRUB2       (0x04)
#define MCF_GPIO_DDRUB_DDRUB3       (0x08)
#define MCF_GPIO_DDRUB_DDRUB4       (0x10)
#define MCF_GPIO_DDRUB_DDRUB5       (0x20)
#define MCF_GPIO_DDRUB_DDRUB6       (0x40)
#define MCF_GPIO_DDRUB_DDRUB7       (0x80)

/* Bit definitions and macros for MCF_GPIO_DDRUC */
#define MCF_GPIO_DDRUC_DDRUC0       (0x01)
#define MCF_GPIO_DDRUC_DDRUC1       (0x02)
#define MCF_GPIO_DDRUC_DDRUC2       (0x04)
#define MCF_GPIO_DDRUC_DDRUC3       (0x08)
#define MCF_GPIO_DDRUC_DDRUC4       (0x10)
#define MCF_GPIO_DDRUC_DDRUC5       (0x20)
#define MCF_GPIO_DDRUC_DDRUC6       (0x40)
#define MCF_GPIO_DDRUC_DDRUC7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETNQ */
#define MCF_GPIO_SETNQ_SETNQ0       (0x01)
#define MCF_GPIO_SETNQ_SETNQ1       (0x02)
#define MCF_GPIO_SETNQ_SETNQ2       (0x04)
#define MCF_GPIO_SETNQ_SETNQ3       (0x08)
#define MCF_GPIO_SETNQ_SETNQ4       (0x10)
#define MCF_GPIO_SETNQ_SETNQ5       (0x20)
#define MCF_GPIO_SETNQ_SETNQ6       (0x40)
#define MCF_GPIO_SETNQ_SETNQ7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETDD */
#define MCF_GPIO_SETDD_SETDD0       (0x01)
#define MCF_GPIO_SETDD_SETDD1       (0x02)
#define MCF_GPIO_SETDD_SETDD2       (0x04)
#define MCF_GPIO_SETDD_SETDD3       (0x08)
#define MCF_GPIO_SETDD_SETDD4       (0x10)
#define MCF_GPIO_SETDD_SETDD5       (0x20)
#define MCF_GPIO_SETDD_SETDD6       (0x40)
#define MCF_GPIO_SETDD_SETDD7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETAN */
#define MCF_GPIO_SETAN_SETAN0       (0x01)
#define MCF_GPIO_SETAN_SETAN1       (0x02)
#define MCF_GPIO_SETAN_SETAN2       (0x04)
#define MCF_GPIO_SETAN_SETAN3       (0x08)
#define MCF_GPIO_SETAN_SETAN4       (0x10)
#define MCF_GPIO_SETAN_SETAN5       (0x20)
#define MCF_GPIO_SETAN_SETAN6       (0x40)
#define MCF_GPIO_SETAN_SETAN7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETAS */
#define MCF_GPIO_SETAS_SETAS0       (0x01)
#define MCF_GPIO_SETAS_SETAS1       (0x02)
#define MCF_GPIO_SETAS_SETAS2       (0x04)
#define MCF_GPIO_SETAS_SETAS3       (0x08)
#define MCF_GPIO_SETAS_SETAS4       (0x10)
#define MCF_GPIO_SETAS_SETAS5       (0x20)
#define MCF_GPIO_SETAS_SETAS6       (0x40)
#define MCF_GPIO_SETAS_SETAS7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETQS */
#define MCF_GPIO_SETQS_SETQS0       (0x01)
#define MCF_GPIO_SETQS_SETQS1       (0x02)
#define MCF_GPIO_SETQS_SETQS2       (0x04)
#define MCF_GPIO_SETQS_SETQS3       (0x08)
#define MCF_GPIO_SETQS_SETQS4       (0x10)
#define MCF_GPIO_SETQS_SETQS5       (0x20)
#define MCF_GPIO_SETQS_SETQS6       (0x40)
#define MCF_GPIO_SETQS_SETQS7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETTA */
#define MCF_GPIO_SETTA_SETTA0       (0x01)
#define MCF_GPIO_SETTA_SETTA1       (0x02)
#define MCF_GPIO_SETTA_SETTA2       (0x04)
#define MCF_GPIO_SETTA_SETTA3       (0x08)
#define MCF_GPIO_SETTA_SETTA4       (0x10)
#define MCF_GPIO_SETTA_SETTA5       (0x20)
#define MCF_GPIO_SETTA_SETTA6       (0x40)
#define MCF_GPIO_SETTA_SETTA7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETTC */
#define MCF_GPIO_SETTC_SETTC0       (0x01)
#define MCF_GPIO_SETTC_SETTC1       (0x02)
#define MCF_GPIO_SETTC_SETTC2       (0x04)
#define MCF_GPIO_SETTC_SETTC3       (0x08)
#define MCF_GPIO_SETTC_SETTC4       (0x10)
#define MCF_GPIO_SETTC_SETTC5       (0x20)
#define MCF_GPIO_SETTC_SETTC6       (0x40)
#define MCF_GPIO_SETTC_SETTC7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETTD */
#define MCF_GPIO_SETTD_SETTD0       (0x01)
#define MCF_GPIO_SETTD_SETTD1       (0x02)
#define MCF_GPIO_SETTD_SETTD2       (0x04)
#define MCF_GPIO_SETTD_SETTD3       (0x08)
#define MCF_GPIO_SETTD_SETTD4       (0x10)
#define MCF_GPIO_SETTD_SETTD5       (0x20)
#define MCF_GPIO_SETTD_SETTD6       (0x40)
#define MCF_GPIO_SETTD_SETTD7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETUA */
#define MCF_GPIO_SETUA_SETUA0       (0x01)
#define MCF_GPIO_SETUA_SETUA1       (0x02)
#define MCF_GPIO_SETUA_SETUA2       (0x04)
#define MCF_GPIO_SETUA_SETUA3       (0x08)
#define MCF_GPIO_SETUA_SETUA4       (0x10)
#define MCF_GPIO_SETUA_SETUA5       (0x20)
#define MCF_GPIO_SETUA_SETUA6       (0x40)
#define MCF_GPIO_SETUA_SETUA7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETUB */
#define MCF_GPIO_SETUB_SETUB0       (0x01)
#define MCF_GPIO_SETUB_SETUB1       (0x02)
#define MCF_GPIO_SETUB_SETUB2       (0x04)
#define MCF_GPIO_SETUB_SETUB3       (0x08)
#define MCF_GPIO_SETUB_SETUB4       (0x10)
#define MCF_GPIO_SETUB_SETUB5       (0x20)
#define MCF_GPIO_SETUB_SETUB6       (0x40)
#define MCF_GPIO_SETUB_SETUB7       (0x80)

/* Bit definitions and macros for MCF_GPIO_SETUC */
#define MCF_GPIO_SETUC_SETUC0       (0x01)
#define MCF_GPIO_SETUC_SETUC1       (0x02)
#define MCF_GPIO_SETUC_SETUC2       (0x04)
#define MCF_GPIO_SETUC_SETUC3       (0x08)
#define MCF_GPIO_SETUC_SETUC4       (0x10)
#define MCF_GPIO_SETUC_SETUC5       (0x20)
#define MCF_GPIO_SETUC_SETUC6       (0x40)
#define MCF_GPIO_SETUC_SETUC7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRNQ */
#define MCF_GPIO_CLRNQ_CLRNQ0       (0x01)
#define MCF_GPIO_CLRNQ_CLRNQ1       (0x02)
#define MCF_GPIO_CLRNQ_CLRNQ2       (0x04)
#define MCF_GPIO_CLRNQ_CLRNQ3       (0x08)
#define MCF_GPIO_CLRNQ_CLRNQ4       (0x10)
#define MCF_GPIO_CLRNQ_CLRNQ5       (0x20)
#define MCF_GPIO_CLRNQ_CLRNQ6       (0x40)
#define MCF_GPIO_CLRNQ_CLRNQ7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRDD */
#define MCF_GPIO_CLRDD_CLRDD0       (0x01)
#define MCF_GPIO_CLRDD_CLRDD1       (0x02)
#define MCF_GPIO_CLRDD_CLRDD2       (0x04)
#define MCF_GPIO_CLRDD_CLRDD3       (0x08)
#define MCF_GPIO_CLRDD_CLRDD4       (0x10)
#define MCF_GPIO_CLRDD_CLRDD5       (0x20)
#define MCF_GPIO_CLRDD_CLRDD6       (0x40)
#define MCF_GPIO_CLRDD_CLRDD7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRAN */
#define MCF_GPIO_CLRAN_CLRAN0       (0x01)
#define MCF_GPIO_CLRAN_CLRAN1       (0x02)
#define MCF_GPIO_CLRAN_CLRAN2       (0x04)
#define MCF_GPIO_CLRAN_CLRAN3       (0x08)
#define MCF_GPIO_CLRAN_CLRAN4       (0x10)
#define MCF_GPIO_CLRAN_CLRAN5       (0x20)
#define MCF_GPIO_CLRAN_CLRAN6       (0x40)
#define MCF_GPIO_CLRAN_CLRAN7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRAS */
#define MCF_GPIO_CLRAS_CLRAS0       (0x01)
#define MCF_GPIO_CLRAS_CLRAS1       (0x02)
#define MCF_GPIO_CLRAS_CLRAS2       (0x04)
#define MCF_GPIO_CLRAS_CLRAS3       (0x08)
#define MCF_GPIO_CLRAS_CLRAS4       (0x10)
#define MCF_GPIO_CLRAS_CLRAS5       (0x20)
#define MCF_GPIO_CLRAS_CLRAS6       (0x40)
#define MCF_GPIO_CLRAS_CLRAS7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRQS */
#define MCF_GPIO_CLRQS_CLRQS0       (0x01)
#define MCF_GPIO_CLRQS_CLRQS1       (0x02)
#define MCF_GPIO_CLRQS_CLRQS2       (0x04)
#define MCF_GPIO_CLRQS_CLRQS3       (0x08)
#define MCF_GPIO_CLRQS_CLRQS4       (0x10)
#define MCF_GPIO_CLRQS_CLRQS5       (0x20)
#define MCF_GPIO_CLRQS_CLRQS6       (0x40)
#define MCF_GPIO_CLRQS_CLRQS7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRTA */
#define MCF_GPIO_CLRTA_CLRTA0       (0x01)
#define MCF_GPIO_CLRTA_CLRTA1       (0x02)
#define MCF_GPIO_CLRTA_CLRTA2       (0x04)
#define MCF_GPIO_CLRTA_CLRTA3       (0x08)
#define MCF_GPIO_CLRTA_CLRTA4       (0x10)
#define MCF_GPIO_CLRTA_CLRTA5       (0x20)
#define MCF_GPIO_CLRTA_CLRTA6       (0x40)
#define MCF_GPIO_CLRTA_CLRTA7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRTC */
#define MCF_GPIO_CLRTC_CLRTC0       (0x01)
#define MCF_GPIO_CLRTC_CLRTC1       (0x02)
#define MCF_GPIO_CLRTC_CLRTC2       (0x04)
#define MCF_GPIO_CLRTC_CLRTC3       (0x08)
#define MCF_GPIO_CLRTC_CLRTC4       (0x10)
#define MCF_GPIO_CLRTC_CLRTC5       (0x20)
#define MCF_GPIO_CLRTC_CLRTC6       (0x40)
#define MCF_GPIO_CLRTC_CLRTC7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRTD */
#define MCF_GPIO_CLRTD_CLRTD0       (0x01)
#define MCF_GPIO_CLRTD_CLRTD1       (0x02)
#define MCF_GPIO_CLRTD_CLRTD2       (0x04)
#define MCF_GPIO_CLRTD_CLRTD3       (0x08)
#define MCF_GPIO_CLRTD_CLRTD4       (0x10)
#define MCF_GPIO_CLRTD_CLRTD5       (0x20)
#define MCF_GPIO_CLRTD_CLRTD6       (0x40)
#define MCF_GPIO_CLRTD_CLRTD7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRUA */
#define MCF_GPIO_CLRUA_CLRUA0       (0x01)
#define MCF_GPIO_CLRUA_CLRUA1       (0x02)
#define MCF_GPIO_CLRUA_CLRUA2       (0x04)
#define MCF_GPIO_CLRUA_CLRUA3       (0x08)
#define MCF_GPIO_CLRUA_CLRUA4       (0x10)
#define MCF_GPIO_CLRUA_CLRUA5       (0x20)
#define MCF_GPIO_CLRUA_CLRUA6       (0x40)
#define MCF_GPIO_CLRUA_CLRUA7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRUB */
#define MCF_GPIO_CLRUB_CLRUB0       (0x01)
#define MCF_GPIO_CLRUB_CLRUB1       (0x02)
#define MCF_GPIO_CLRUB_CLRUB2       (0x04)
#define MCF_GPIO_CLRUB_CLRUB3       (0x08)
#define MCF_GPIO_CLRUB_CLRUB4       (0x10)
#define MCF_GPIO_CLRUB_CLRUB5       (0x20)
#define MCF_GPIO_CLRUB_CLRUB6       (0x40)
#define MCF_GPIO_CLRUB_CLRUB7       (0x80)

/* Bit definitions and macros for MCF_GPIO_CLRUC */
#define MCF_GPIO_CLRUC_CLRUC0       (0x01)
#define MCF_GPIO_CLRUC_CLRUC1       (0x02)
#define MCF_GPIO_CLRUC_CLRUC2       (0x04)
#define MCF_GPIO_CLRUC_CLRUC3       (0x08)
#define MCF_GPIO_CLRUC_CLRUC4       (0x10)
#define MCF_GPIO_CLRUC_CLRUC5       (0x20)
#define MCF_GPIO_CLRUC_CLRUC6       (0x40)
#define MCF_GPIO_CLRUC_CLRUC7       (0x80)

/* Bit definitions and macros for MCF_GPIO_PNQPAR */
#define MCF_GPIO_PNQPAR_IRQ1_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ2_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ3_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ4_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ5_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ6_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ7_GPIO   (0x00)
#define MCF_GPIO_PNQPAR_IRQ1_IRQ1   (0x01)
#define MCF_GPIO_PNQPAR_IRQ1_SYNCA  (0x02)
#define MCF_GPIO_PNQPAR_IRQ1_PWM1   (0x03)
#define MCF_GPIO_PNQPAR_IRQ2_IRQ2   (0x04)
#define MCF_GPIO_PNQPAR_IRQ3_IRQ3   (0x08)
#define MCF_GPIO_PNQPAR_IRQ4_IRQ4   (0x10)
#define MCF_GPIO_PNQPAR_IRQ5_IRQ5   (0x20)
#define MCF_GPIO_PNQPAR_IRQ6_IRQ6   (0x40)
#define MCF_GPIO_PNQPAR_IRQ7_IRQ7   (0x80)

/* Bit definitions and macros for MCF_GPIO_PDDPAR */
#define MCF_GPIO_PDDPAR_PDDPAR0     (0x01)
#define MCF_GPIO_PDDPAR_PDDPAR1     (0x02)
#define MCF_GPIO_PDDPAR_PDDPAR2     (0x04)
#define MCF_GPIO_PDDPAR_PDDPAR3     (0x08)
#define MCF_GPIO_PDDPAR_PDDPAR4     (0x10)
#define MCF_GPIO_PDDPAR_PDDPAR5     (0x20)
#define MCF_GPIO_PDDPAR_PDDPAR6     (0x40)
#define MCF_GPIO_PDDPAR_PDDPAR7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PANPAR */
#define MCF_GPIO_PANPAR_PANPAR0     (0x01)
#define MCF_GPIO_PANPAR_PANPAR1     (0x02)
#define MCF_GPIO_PANPAR_PANPAR2     (0x04)
#define MCF_GPIO_PANPAR_PANPAR3     (0x08)
#define MCF_GPIO_PANPAR_PANPAR4     (0x10)
#define MCF_GPIO_PANPAR_PANPAR5     (0x20)
#define MCF_GPIO_PANPAR_PANPAR6     (0x40)
#define MCF_GPIO_PANPAR_PANPAR7     (0x80)

/* Bit definitions and macros for MCF_GPIO_PASPAR */
#define MCF_GPIO_PASPAR_PASPAR0(x)  (((x)&0x03)<<0)
#define MCF_GPIO_PASPAR_PASPAR1(x)  (((x)&0x03)<<2)

/* Bit definitions and macros for MCF_GPIO_PQSPAR */
#define MCF_GPIO_PQSPAR_PQSPAR0(x)  (((x)&0x0003)<<0)
#define MCF_GPIO_PQSPAR_PQSPAR1(x)  (((x)&0x0003)<<2)
#define MCF_GPIO_PQSPAR_PQSPAR2(x)  (((x)&0x0003)<<4)
#define MCF_GPIO_PQSPAR_PQSPAR3(x)  (((x)&0x0003)<<6)
#define MCF_GPIO_PQSPAR_PQSPAR4(x)  (((x)&0x0003)<<8)
#define MCF_GPIO_PQSPAR_PQSPAR5(x)  (((x)&0x0003)<<10)
#define MCF_GPIO_PQSPAR_PQSPAR6(x)  (((x)&0x0003)<<12)

/* Bit definitions and macros for MCF_GPIO_PTAPAR */
#define MCF_GPIO_PTAPAR_PTAPAR0(x)  (((x)&0x03)<<0)
#define MCF_GPIO_PTAPAR_PTAPAR1(x)  (((x)&0x03)<<2)
#define MCF_GPIO_PTAPAR_PTAPAR2(x)  (((x)&0x03)<<4)
#define MCF_GPIO_PTAPAR_PTAPAR3(x)  (((x)&0x03)<<6)

/* Bit definitions and macros for MCF_GPIO_PTCPAR */
#define MCF_GPIO_PTCPAR_PTCPAR0(x)  (((x)&0x03)<<0)
#define MCF_GPIO_PTCPAR_PTCPAR1(x)  (((x)&0x03)<<2)
#define MCF_GPIO_PTCPAR_PTCPAR2(x)  (((x)&0x03)<<4)
#define MCF_GPIO_PTCPAR_PTCPAR3(x)  (((x)&0x03)<<6)
#define MCF_GPIO_PTCPAR_TIN3_GPIO   (0x00)
#define MCF_GPIO_PTCPAR_TIN2_GPIO   (0x00)
#define MCF_GPIO_PTCPAR_TIN1_GPIO   (0x00)
#define MCF_GPIO_PTCPAR_TIN0_GPIO   (0x00)
#define MCF_GPIO_PTCPAR_TIN3_TIN3   (0x40)
#define MCF_GPIO_PTCPAR_TIN2_TIN2   (0x10)
#define MCF_GPIO_PTCPAR_TIN1_TIN1   (0x04)
#define MCF_GPIO_PTCPAR_TIN0_TIN0   (0x01)
#define MCF_GPIO_PTCPAR_TIN3_TOUT3  (0x80)
#define MCF_GPIO_PTCPAR_TIN2_TOUT2  (0x20)
#define MCF_GPIO_PTCPAR_TIN1_TOUT1  (0x08)
#define MCF_GPIO_PTCPAR_TIN0_TOUT0  (0x02)
#define MCF_GPIO_PTCPAR_TIN3_PWM6   (0xC0)
#define MCF_GPIO_PTCPAR_TIN2_PWM4   (0x30)
#define MCF_GPIO_PTCPAR_TIN1_PWM2   (0x0C)
#define MCF_GPIO_PTCPAR_TIN0_PWM0   (0x03)

/* Bit definitions and macros for MCF_GPIO_PTDPAR */
#define MCF_GPIO_PTDPAR_PTDPAR0     (0x01)
#define MCF_GPIO_PTDPAR_PTDPAR1     (0x02)
#define MCF_GPIO_PTDPAR_PTDPAR2     (0x04)
#define MCF_GPIO_PTDPAR_PTDPAR3     (0x08)

/* Bit definitions and macros for MCF_GPIO_PUAPAR */
#define MCF_GPIO_PUAPAR_PUAPAR0(x)  (((x)&0x03)<<0)
#define MCF_GPIO_PUAPAR_PUAPAR1(x)  (((x)&0x03)<<2)
#define MCF_GPIO_PUAPAR_PUAPAR2(x)  (((x)&0x03)<<4)
#define MCF_GPIO_PUAPAR_PUAPAR3(x)  (((x)&0x03)<<6)
#define MCF_GPIO_PUAPAR_CTS0_GPIO   (0x00)
#define MCF_GPIO_PUAPAR_RTS0_GPIO   (0x00)
#define MCF_GPIO_PUAPAR_RXD0_GPIO   (0x00)
#define MCF_GPIO_PUAPAR_TXD0_GPIO   (0x00)
#define MCF_GPIO_PUAPAR_CTS0_CTS0   (0x40)
#define MCF_GPIO_PUAPAR_RTS0_RTS0   (0x10)
#define MCF_GPIO_PUAPAR_RXD0_RXD0   (0x04)
#define MCF_GPIO_PUAPAR_TXD0_TXD0   (0x01)
#define MCF_GPIO_PUAPAR_CTS0_CANRX  (0x80)
#define MCF_GPIO_PUAPAR_RTS0_CANTX  (0x20)

/* Bit definitions and macros for MCF_GPIO_PUBPAR */
#define MCF_GPIO_PUBPAR_PUBPAR0(x)  (((x)&0x03)<<0)
#define MCF_GPIO_PUBPAR_PUBPAR1(x)  (((x)&0x03)<<2)
#define MCF_GPIO_PUBPAR_PUBPAR2(x)  (((x)&0x03)<<4)
#define MCF_GPIO_PUBPAR_PUBPAR3(x)  (((x)&0x03)<<6)
#define MCF_GPIO_PUBPAR_CTS1_GPIO   (0x00)
#define MCF_GPIO_PUBPAR_RTS1_GPIO   (0x00)
#define MCF_GPIO_PUBPAR_RXD1_GPIO   (0x00)
#define MCF_GPIO_PUBPAR_TXD1_GPIO   (0x00)
#define MCF_GPIO_PUBPAR_CTS1_CTS1   (0x40)
#define MCF_GPIO_PUBPAR_RTS1_RTS1   (0x10)
#define MCF_GPIO_PUBPAR_RXD1_RXD1   (0x04)
#define MCF_GPIO_PUBPAR_TXD1_TXD1   (0x01)
#define MCF_GPIO_PUBPAR_CTS1_SYNCA  (0x80)
#define MCF_GPIO_PUBPAR_RTS1_SYNCB  (0x20)
#define MCF_GPIO_PUBPAR_CTS1_RXD2   (0xC0)
#define MCF_GPIO_PUBPAR_RTS1_TXD1   (0x30)

/* Bit definitions and macros for MCF_GPIO_PUCPAR */
#define MCF_GPIO_PUCPAR_PUCPAR0     (0x01)
#define MCF_GPIO_PUCPAR_PUCPAR1     (0x02)
#define MCF_GPIO_PUCPAR_PUCPAR2     (0x04)
#define MCF_GPIO_PUCPAR_PUCPAR3     (0x08)
#define MCF_GPIO_PUCPAR_CTS2_GPIO   (0x00)
#define MCF_GPIO_PUCPAR_RTS2_GPIO   (0x00)
#define MCF_GPIO_PUCPAR_RXD2_GPIO   (0x00)
#define MCF_GPIO_PUCPAR_TXD2_GPIO   (0x00)
#define MCF_GPIO_PUCPAR_CTS2_CTS2   (0x08)
#define MCF_GPIO_PUCPAR_RTS2_RTS2   (0x04)
#define MCF_GPIO_PUCPAR_RXD2_RXD2   (0x02)
#define MCF_GPIO_PUCPAR_TXD2_TXD2   (0x01)

/* Bit definitions and macros for MCF_GPIO_PSRR */
#define MCF_GPIO_PSRR_PSRR0         (0x00000001)
#define MCF_GPIO_PSRR_PSRR1         (0x00000002)
#define MCF_GPIO_PSRR_PSRR2         (0x00000004)
#define MCF_GPIO_PSRR_PSRR3         (0x00000008)
#define MCF_GPIO_PSRR_PSRR4         (0x00000010)
#define MCF_GPIO_PSRR_PSRR5         (0x00000020)
#define MCF_GPIO_PSRR_PSRR6         (0x00000040)
#define MCF_GPIO_PSRR_PSRR7         (0x00000080)
#define MCF_GPIO_PSRR_PSRR8         (0x00000100)
#define MCF_GPIO_PSRR_PSRR9         (0x00000200)
#define MCF_GPIO_PSRR_PSRR10        (0x00000400)
#define MCF_GPIO_PSRR_PSRR11        (0x00000800)
#define MCF_GPIO_PSRR_PSRR12        (0x00001000)
#define MCF_GPIO_PSRR_PSRR13        (0x00002000)
#define MCF_GPIO_PSRR_PSRR14        (0x00004000)
#define MCF_GPIO_PSRR_PSRR15        (0x00008000)
#define MCF_GPIO_PSRR_PSRR16        (0x00010000)
#define MCF_GPIO_PSRR_PSRR17        (0x00020000)
#define MCF_GPIO_PSRR_PSRR18        (0x00040000)
#define MCF_GPIO_PSRR_PSRR19        (0x00080000)
#define MCF_GPIO_PSRR_PSRR20        (0x00100000)
#define MCF_GPIO_PSRR_PSRR21        (0x00200000)
#define MCF_GPIO_PSRR_PSRR22        (0x00400000)
#define MCF_GPIO_PSRR_PSRR23        (0x00800000)
#define MCF_GPIO_PSRR_PSRR24        (0x01000000)
#define MCF_GPIO_PSRR_PSRR25        (0x02000000)
#define MCF_GPIO_PSRR_PSRR26        (0x04000000)
#define MCF_GPIO_PSRR_PSRR27        (0x08000000)
#define MCF_GPIO_PSRR_PSRR28        (0x10000000)
#define MCF_GPIO_PSRR_PSRR29        (0x20000000)
#define MCF_GPIO_PSRR_PSRR30        (0x40000000)
#define MCF_GPIO_PSRR_PSRR31        (0x80000000)

/* Bit definitions and macros for MCF_GPIO_PDSR */
#define MCF_GPIO_PDSR_PDSR0         (0x00000001)
#define MCF_GPIO_PDSR_PDSR1         (0x00000002)
#define MCF_GPIO_PDSR_PDSR2         (0x00000004)
#define MCF_GPIO_PDSR_PDSR3         (0x00000008)
#define MCF_GPIO_PDSR_PDSR4         (0x00000010)
#define MCF_GPIO_PDSR_PDSR5         (0x00000020)
#define MCF_GPIO_PDSR_PDSR6         (0x00000040)
#define MCF_GPIO_PDSR_PDSR7         (0x00000080)
#define MCF_GPIO_PDSR_PDSR8         (0x00000100)
#define MCF_GPIO_PDSR_PDSR9         (0x00000200)
#define MCF_GPIO_PDSR_PDSR10        (0x00000400)
#define MCF_GPIO_PDSR_PDSR11        (0x00000800)
#define MCF_GPIO_PDSR_PDSR12        (0x00001000)
#define MCF_GPIO_PDSR_PDSR13        (0x00002000)
#define MCF_GPIO_PDSR_PDSR14        (0x00004000)
#define MCF_GPIO_PDSR_PDSR15        (0x00008000)
#define MCF_GPIO_PDSR_PDSR16        (0x00010000)
#define MCF_GPIO_PDSR_PDSR17        (0x00020000)
#define MCF_GPIO_PDSR_PDSR18        (0x00040000)
#define MCF_GPIO_PDSR_PDSR19        (0x00080000)
#define MCF_GPIO_PDSR_PDSR20        (0x00100000)
#define MCF_GPIO_PDSR_PDSR21        (0x00200000)
#define MCF_GPIO_PDSR_PDSR22        (0x00400000)
#define MCF_GPIO_PDSR_PDSR23        (0x00800000)
#define MCF_GPIO_PDSR_PDSR24        (0x01000000)
#define MCF_GPIO_PDSR_PDSR25        (0x02000000)
#define MCF_GPIO_PDSR_PDSR26        (0x04000000)
#define MCF_GPIO_PDSR_PDSR27        (0x08000000)
#define MCF_GPIO_PDSR_PDSR28        (0x10000000)
#define MCF_GPIO_PDSR_PDSR29        (0x20000000)
#define MCF_GPIO_PDSR_PDSR30        (0x40000000)
#define MCF_GPIO_PDSR_PDSR31        (0x80000000)

#endif









