#include <stdio.h>
#include <stdlib.h>

union integer{
	int i;
	unsigned char array[sizeof(int)];
};

int main(){

	union integer integer;
	integer.i = 3490;
	for(int j = 0; j< sizeof(int);j++){
		printf("Integer: %u\n", integer.array[j]);
		printf("Hex: %02x\n", integer.array[j]);
	}
	printf("done\n");
	//free(integer.i);
	return 0;
}
