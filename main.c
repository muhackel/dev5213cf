
#include "tools.h"
#include "types.h"
#include "ips.h"

void main(void)
{
systeminit();
uart0init(SYSTEMCLOCK, BAUD);
writeLine("asdf/0");
while(1){
writeUART(readUART());
}

}