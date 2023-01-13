#include <stdbool.h>
#include "stack.h"

#ifndef CHIP8_CPU
#define CHIP_8CPU

uint8_t memory[4096];
bool display[64][32];
unsigned int program_counter;
stack* call_stack; //Pointer to top of stack
uint8_t delay_timer;
uint8_t sound_timer;

uint8_t V0;
uint8_t V1;
uint8_t V2;
uint8_t V3;
uint8_t V4;
uint8_t V5;
uint8_t V6;
uint8_t V7;
uint8_t V8;
uint8_t V9;
uint8_t VA;
uint8_t VB;
uint8_t VC;
uint8_t VD;
uint8_t VE;
uint8_t VF;

#endif