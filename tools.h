
#ifndef TOOLS_H
#define TOOLS_H

#include "types.h"

#define SYSTEMCLOCK 48000
#define BAUD         9600
void systeminit();


// Schnittstellenfunktionen
void uart0init(uint32 systemClockKHz, uint32 baudRate);
void writeUART(uint8 zeichen);
uint8 readUART();

void writeLine(char *line);
void writeByte(uint32 adr, uint8 value);
void writeWord(uint32 adr, uint16 value);
void writeLong(uint32 adr, uint32 value);
uint8 readByte(uint32 adr);
uint16 readWord(uint32 adr);
uint32 readLong(uint32 adr);

#endif