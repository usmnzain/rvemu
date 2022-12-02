#include<stdint.h>

#define DRAM_SIZE 1024*1024*1
#define DRAM_BASE 0x80000000


void dram_store(uint64_t addr, uint64_t size, uint64_t value);
uint64_t dram_load(uint64_t addr, uint64_t size);