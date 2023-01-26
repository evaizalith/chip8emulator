#include <stdio.h> 
#include <stdint.h>
#include "cpu.h"
#include "instructions.h"

void resetCPU() {
    power_on = 1;
    program_counter = 0;
    
    if (call_stack != 0) free(call_stack->items);

    call_stack = newStack(12); //Call stack allows for 12 entries
    delay_timer = 0;
    sound_timer = 0;

    V0 = V1 = V2 = V3 = V4 = V5 = V6 = V7 = V8 = V9 = VA = VB = VC = VD = VE = VF = 0;
}

//This should optimally be run at about 700 hz/s 
void executeInstruction() {
    uint8_t fetch_0 = memory[program_counter];
    uint8_t fetch_1 = memory[++program_counter];
    uint16_t instruction;
    instruction = (fetch0<<8) | (fetch_1); 

    ++program_counter;

    //This is all pseudocode right now
    switch(instruction) {
        case (00E0): //Clear

            break;
        case (00EE): //Return
            break; 

        case (1NNN): //jump NNN
            break;

        case (2NNN): //call subroutine
            break;
        case (3XNN): //If Vx != NN then 
            break;
        case (4XNN): //If Vx == NN then 
            break;
        case (5XY0): //if vx != vyu then
            break;
        case (6XNN): // vx := NN
            break;
        case (7XNN): //vx += NN
            break;
        case (8XY0): //vx := vy
            break;
        case (8XY1): //vx |= vy, bitwise OR
            break;
        case (8XY2): //vx &= vy, bitwise AND
            break;
        case (8XY3): //vx ^= vy, bitwise XOR
            break;
        case (8XY4): //vx += vy, vf = 1 on carry
            break;
        case (8XY5): //vx -= vy, vf = 0 on borrow
            break;
        case (8XY6): //vx >>= vy, vf = old least sig. bit
            break;
        case (8XY7): //vx =- vy, vf = 0 on borrow
            break;
        case (8XYE): //vx <<= vy, vf = old most sig. bit
            break;
        case (9XY0): //if vx == xy then
            break;
        case (ANNN): //i := NNN
            break;
        case (BNNN): //jump0 NNN
            break;
        case (CXNN): //vx := random num AND NNN
            break;
        case (DXYN): //sprite vx vy N, vf = 1 on collision
            break;
        case (EX9E): //If vx key not pressed then
            break;
        case (EXA1): //if vx key pressed
            break;
        case (FX07): //vx := delay
            break;
        case (FX0A): //vx := key, wait for keypress
            break;
        case (FX15): //delay := vx
            break;
        case (FX18): //buzzer := vx
            break;
        case (FX1E): //i += vx
            break;
        case (FX29): //i := hex vx, i is hex char.
            break;
        case (FX33): //bcd vx, decode vx into binary coded decimal
            break;
        case (FX55): //save v0 through vx to i through i + x
            break;
        case (FX65): //load v0 - vx from i through i + x
            break;
    };

}

