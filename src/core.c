#include"../includes/core.h"
#include"../includes/bus.h"

uint32_t fetch(uint64_t addr) {
    uint32_t inst = bus_load(addr, 32);
    return inst;
}

int execute(uint32_t inst){
    uint8_t opcode = inst & 0x3f;
    return inst;
}