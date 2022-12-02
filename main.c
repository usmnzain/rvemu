#include<stdio.h>

#include "includes/dram.h" 

int main(int argc, char *argv[]){
	dram_store(0x80000004, 64, 0xdeadbeef);
	uint64_t val = dram_load(0x80000004, 64);
	printf("%x", val);
	return 0;
}
