#include"../includes/core.h"
#include"../includes/bus.h"

struct Instruction *instruction;

uint32_t fetch(uint64_t addr) {
    uint32_t inst = bus_load(addr, 32);
    return inst;
}

struct Instruction* decode(uint32_t inst, struct Instruction* decoded_inst){
    decoded_inst->opcode = inst & 0x3f;
    return inst;
}