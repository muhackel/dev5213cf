
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

#endif