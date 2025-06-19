ORG 0000H           ; Start at address 0000H

PS2_SBUFF EQU 0C0H
PS2_CONTROL EQU 0C1H
PS2_STATUS EQU 0C2H
VGA_CONFIG EQU 9AH
VGA_DATA EQU 9BH
    
SETUP:
    MOV PS2_CONTROL, #01H
    MOV VGA_CONFIG, #FFH

INPUT_TEXT:
    MOV VGA_DATA, #'H'  ; Example input character 'H'
    MOV VGA_DATA, #'e'  ; Example input character 'e'
    MOV VGA_DATA, #'l'  ; Example input character 'l'
    MOV VGA_DATA, #'l'  ; Example input character 'l'
    MOV VGA_DATA, #'o'  ; Example input character 'o'
    MOV VGA_DATA, #' '   ; Example input character ' '
    MOV VGA_DATA, #'W'  ; Example input character 'W'
    MOV VGA_DATA, #'o'  ; Example input character 'o'
    MOV VGA_DATA, #'r'  ; Example input character 'r'
    MOV VGA_DATA, #'l'  ; Example input character 'l'
    MOV VGA_DATA, #'d'  ; Example input character 'd'


MAINLOOP:


    MOV A, PS2_STATUS
    JNZ MAINLOOP          ; If no key pressed, loop

    ; Read the key from the PS2 buffer
    MOV A, PS2_SBUFF
    MOV VGA_DATA, A      ; Send the key to VGA data port

    ; Optionally, you can add a delay or further processing here
    SJMP MAINLOOP         ; Repeat the loop
END                ; End of program