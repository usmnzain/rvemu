#include "../includes/alu_ops.h"

void op_add(uint8_t rs1, uint8_t rs2, uint8_t rd, uint32_t *regs){
    regs[rd] = regs[rs1] + regs[rs2];
}