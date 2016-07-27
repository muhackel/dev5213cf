
#include "tools.h"
#include "types.h"
#include "ips.h"

void main(void)
{
systeminit();
uart0init(SYSTEMCLOCK, BAUD);
writeLine("Dies ist ein Test\n");
while(1){
;
}

}