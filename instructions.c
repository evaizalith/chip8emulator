#include "instructions.h"
#include "cpu.h"
#include "stack.h"
#include <stdio.h>

void JP(uint8_t address) {
    program_counter = address;
}

void JP(uint8_t V0reg, uint8_t address) {
    program_counter = V0reg + address;
}

void CALL(uint8_t address) {
    push(program_counter);
    program_counter = address;
}