#include<stdint.h>

struct Instruction {
    int opcode;
    int funct3;
    int funct7;
    int rs1;
    int rs2;
    int rd;
    int imm;
};

uint32_t fetch(uint64_t addr);
struct Instruction* decode(uint32_t inst, struct Instruction *decoded_inst );
void execute();