#include "../includes/core.h"
#include "../includes/bus.h"
#include "../includes/opcodes.h"

uint32_t fetch(uint64_t addr) {
    uint32_t inst = bus_load(addr, 32);
    return inst;
}

int execute(uint32_t inst){
    int opcode = inst & 0x3f;
    int f3 = (inst >> 12) & 0x7;
    int f7 = (inst >> 25) & 0x7f;
    int rd = (inst >> 7) & 0x1f;
    int rs1 = (inst >> 15) & 0x1f;
    int rs2 = (inst >> 20) & 0x1f;

    switch (opcode)
    {
        case R_TYPE:
            switch(f3)
            {
                case ADD_SUB:
                    switch(f7)
                    {
                        case ADD:
                            rd = rs1 + rs2;
                            break;
                        case SUB:
                            rd = rs1 - rs2;
                            break;
                    }
                    break;
                case SLL:
                case SLT:
                case SLTU:
                case XOR:
                case SR:
                    switch(f7)
                    {
                        case SRL:
                        case SRA:
                    }
                case OR:
                case AND:
            } 
            break;
        
        default:
            break;
    }

    return inst;
}