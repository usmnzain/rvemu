#include<stdio.h>

#include "includes/bus.h" 

int main(int argc, char *argv[]){
	bus_store(0x80000004, 64, 0xdeadbeef);
	uint64_t val = bus_load(0x80000004, 64);
	printf("%x", val);
	return 0;
}
