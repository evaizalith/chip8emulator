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

    switch(fetch_0) {
        case:

        case: 
    };

}

