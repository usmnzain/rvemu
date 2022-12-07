#include<../includes/bus.h>
#include<../includes/dram.h>

uint64_t bus_load(uint64_t addr, uint64_t size) {
    return dram_load(addr, size);
}

void bus_store(uint64_t addr, uint64_t size, uint64_t value){
    dram_store(addr, size, value);
}