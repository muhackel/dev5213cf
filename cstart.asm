;-------------------------------------------------------------------------
; 
;	Version : 		1.0 			(18.9.2015 / Sebastian Raedle)
;
;	Description:	Application startup code (__main)        
;					Create and reserve stack 
;
;-------------------------------------------------------------------------

    xref    _main
    xref    _exit

    xref    data

    ; locate and reserve application stack @ 0x7000 - 0x7FFF

    section stack,,"data"
    org		$7000
    ds.b    $1000
__stack

    section S_cstart,,"code"

    xdef    __main

__main:

    move.l  #__stack,A7         ; Initialise application stack
    lea     data,a5             ; Load A5 with address of static data group
    suba.l  a6,a6               ; Clear frame pointer
    jsr     _main               ; Run the main program
    clr.l   (a7)                ; Assume exit code was 0
    jsr     _exit               ; Exit

    end     __main

	