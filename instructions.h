void CLA(); //Clear screen
void RET(); //Return from subroutine 
void JP(uint8_t address); //Jump to address
void JP(uint8_t V0, uint8_t address); //Jump to V0 + address
void CALL(uint8_t address); //Call subroutine at address
void SE(uint8_t Vx, uint8_t byte); //Skip next instruction if Vx == kk
void SNE(uint8_t Vx, uint8_t byte); //Skip next instruction if Vx != kk
void LD(uint8_t Vx, uint8_t byte); //Vx = kk
void ADD(uint8_t Vx, uint8_t byte); //Vx = Vx + kk, VF is carry flag
void OR(uint8_t Vx, uint8_t Vy); //Bitwise or, Vx = Vx OR Vy
void AND(uint8_t Vx, uint8_t Vy); //Bitwise and, Vx = Vx AND Vy
void XOR(uint8_t Vx, uint8_t Vy); //Bitwise XOR, Vx = Vx XOR Vy 
void SUB(uint8_t Vx, uint8_t Vy); //Vx = Vx - Vy, VF is carry flag
void SHR(uint8_t Vx, uint8_t Vy); //Vx = Vx SHR 1
void SUBN(uint8_t Vx, uint8_t Vy); //Vx = Vy - Vx, VF = NOT borrow
void SHL(uint8_t Vx, uint8_t Vy); //Vx = Vx SHL 1
//LD I, addr
void RND(uint8_t Vx); //Vx = Vx AND random byte
void DRW(uint8_t Vx, uint8_t Vy, uint8_t nibble); //Draw n-byte sprite at (Vx, Vy), VF = collision
void SKP(uint8_t Vx); //Skip next instruction if key with value Vx is pressed
void SKNP(uint8_t Vx); //Skip next if key with value Vx is not pressed
void ADDI(uint8_t I, uint8_t Vx); 
void LDI(uint8_t F, uint8_t Vx); //I = location of sprite for digit Vx
void LDB(uint8_t B, uint8_t Vx); //BCD representation of Vx in I, I + 1, I + 2
void LDarray(uint8_t I, uint8_t Vx); //LD [I], Vx 
void RDarray(uint8_t Vx, uint8_t I) // LD Vx, [I]