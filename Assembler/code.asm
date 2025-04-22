ORG 0000H

main:
    XRL A, #0
    MOV R1, #0
    MOV R0, #(10+5)
loop:
    ADD A, R0
    INC R1 
    CJNE R1, #5, loop

END