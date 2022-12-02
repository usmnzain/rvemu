#include "../includes/dram.h"

uint8_t mem[DRAM_SIZE];

void dram_store(uint64_t addr, uint64_t size, uint64_t value){
    int rows = size / 8;

    for(int i = 0; i < rows; i++){
        mem[addr - DRAM_BASE + i] = (uint8_t)((value >> (rows*i)) & 0xff);
    }
}

uint64_t dram_load(uint64_t addr, uint64_t size){
    int rows = size / 8;
    uint64_t data = 0;

    for(int i = 0; i < rows; i++){
        data |= (mem[addr - DRAM_BASE + i]) << (rows*i);
    }

    return data;
}