/**
 * Interrupt Service Routines / Interrupt Handlers
**/
#include "isr.h"
#include "types.h"
#include "tools.h"

_IH void
AccessErrorIsr()
{
  ;
}

_IH void
AddressErrorIsr()
{
  ;
}

_IH void
IllegalInstructionIsr()
{
  ;
}

_IH void
UnhandledInterrupt()
{
  ;
}

_IH void
PrivilegeViolationIsr()
{
  ;
}

_IH void
TraceIsr()
{
  ;
}

_IH void
UnimpOpcodeAIsr()
{
  ;
}

_IH void
UnimpOpcodeFIsr()
{
  ;
}

_IH void
DebugIsr()
{
  ;
}

_IH void
FormatErrorIsr()
{
  ;
}

_IH void 
TrapIsr() 
{
  ;
}
 
_IH void 
EdgePortFlag1Isr() 
{
  ;
}

_IH void 
EdgePortFlag2Isr() 
{
  ;
}

_IH void 
EdgePortFlag3Isr() 
{
  ;
}

_IH void 
EdgePortFlag4Isr() 
{
  ;
}

_IH void 
EdgePortFlag5Isr() 
{
  ;
}

_IH void 
EdgePortFlag6Isr() 
{
  ;
}

_IH void 
EdgePortFlag7Isr() 
{
  ;
}

_IH void 
SoftwareWatchdogTimeoutIsr() 
{
  ;
}

_IH void 
DMA0TransferCompleteIsr() 
{
  ;
}

_IH void 
DMA1TransferCompleteIsr() 
{
  ;
}

_IH void 
DMA2TransferCompleteIsr() 
{
  ;
}

_IH void 
DMA3TransferCompleteIsr() 
{
  ;
}

_IH void 
UART0Isr() 
{
  writeUART(readUART());
}

_IH void 
UART1Isr() 
{
  ;
}

_IH void 
UART2Isr() 
{
  ;
}

_IH void 
I2Cisr() 
{
  ;
}

_IH void 
QSPIisr() 
{
  ;
}

_IH void 
TMR0Isr() 
{
  ;
}

_IH void 
TMR1Isr() 
{
  ;
}

_IH void 
TMR2Isr() 
{
  ;
}

_IH void 
TMR3Isr() 
{
  ;
}

_IH void 
MessageBuffer0Isr() 
{
  ;
}

_IH void 
MessageBuffer1Isr() 
{
  ;
}

_IH void 
MessageBuffer2Isr() 
{
  ;
}

_IH void 
MessageBuffer3Isr() 
{
  ;
}

_IH void 
MessageBuffer4Isr() 
{
  ;
}

_IH void 
MessageBuffer5Isr() 
{
  ;
}

_IH void 
MessageBuffer6Isr() 
{
  ;
}

_IH void 
MessageBuffer7Isr() 
{
  ;
}

_IH void 
MessageBuffer8Isr() 
{
  ;
}

_IH void 
MessageBuffer9Isr() 
{
  ;
}

_IH void 
MessageBuffer10Isr() 
{
  ;
}

_IH void 
MessageBuffer11Isr() 
{
  ;
}

_IH void 
MessageBuffer12Isr() 
{
  ;
}

_IH void 
MessageBuffer13Isr() 
{
  ;
}

_IH void 
MessageBuffer14Isr() 
{
  ;
}

_IH void 
MessageBuffer15Isr() 
{
  ;
}

_IH void 
ErrorInterruptIsr() 
{
  ;
}

_IH void 
BusOffInterruptIsr() 
{
  ;
}

_IH void 
TimerOverflowIsr() 
{
  ;
}

_IH void 
PulseAccumulatorInputIsr() 
{
  ;
}

_IH void 
PulseAccumulatorOverflowIsr() 
{
  ;
}

_IH void 
Timer0Isr() 
{
  ;
}

_IH void 
Timer1Isr() 
{
  ;
}

_IH void 
Timer2Isr() 
{
  ;
}

_IH void 
Timer3Isr() 
{
  ;
}

_IH void 
LVDIsr() 
{
  ;
}
 
_IH void 
ADCAconversionCompleteIsr() 
{
  ;
}

_IH void 
ADCBconversionCompleteIsr() 
{
  ;
}

_IH void 
ADCisr() 
{
  ;
}

_IH void 
SGFMbufferEmptyIsr() 
{
  ;
}

_IH void 
SGFMcommandCompleteIsr() 
{
  ;
}

_IH void 
ProtectionViolationIsr() 
{
  ;
}

_IH void 
AccessError5213Isr() 
{
  ;
}

_IH void 
PWMInterruptIsr() 
{
  ;
}