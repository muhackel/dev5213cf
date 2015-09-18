;		Emulator Commands for initial Setup of SRAM for PEmicro DEV5213CF
reset

;		old memory map
;		0x00000000 - Flash
;		0x40000000 - Internal Perifipheral System
;		0x$$$$$$$$ - SRAM (disabled)

; 		Disable Flash via FLASHBAR	 
put_control 0xC04 0x0				

;		Enable SRAM and mark content as code and data via RAMBAR
put_control 0xC05 0x00000021
                    
; 		Set Vectortable to SRAM start
put_control 0x801 0x00000000                    

;		new memory map
;		0x00000000 - SRAM 
;		0x40000000 - Internal Periferal System
;		0x???????? - Flash (disabled)