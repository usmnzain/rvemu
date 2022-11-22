

#define DRAM_SIZE 1024*1024*1
#define DRAM_BASE 0x80000000

typedef struct DRAM {
    uint8_t mem[DRAM_SIZE];
};

void dram_store(DRAM *dram, uint64_t addr, uint64_t size, uint64_t value);
void dram_load(DRAM *dram, uint64_t addr, uint_64_t size);