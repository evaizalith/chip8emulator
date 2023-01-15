#include <stdio.h> 
#include "cpu.h"

void initializeCPU() {
    power_on = 1;
    program_counter = 0;
    call_stack = newStack(12); //Call stack allows for 12 entries
    delay_timer = 0;
    sound_timer = 0;
}

//This should optimally be run at about 700 hz/s 
void executeInstruction() {_
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

