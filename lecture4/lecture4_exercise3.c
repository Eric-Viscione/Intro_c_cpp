#include <stdio.h>
#include <stdlib.h>

struct X
{
    short s; 
    int i; 
    char c;
};

struct Y
{
    int i;
    char c;
    short s;
};

struct Z
{
    int   i;
    short s;
    char  c;
};

int main(){
	struct Z z;
	struct Y y;
	struct X x;
	int sum_x = sizeof(x.i) + sizeof(x.c) + sizeof(x.s);
	int total_size_x = sizeof(x);
	int sum_y = sizeof(y.i) + sizeof(y.c) + sizeof(y.s);
	int total_size_y = sizeof(y);
	int sum_z = sizeof(z.i) + sizeof(z.c) + sizeof(z.s);
	int total_size_z = sizeof(z);
	printf("Struct x\n");
	printf("size of the structure memory area: %zu\n", sizeof(x));
	printf("size of i c and s %zu, %zu, %zu and their sum %d\n", sizeof(x.i),sizeof(x.c),sizeof(x.s), sum_x);
	printf("The difference between the actual size and the ideal size is %d\n", total_size_x-sum_x);	
	printf("\n\n\n");
	printf("Struct y\n");
	printf("size of the structure memory area %zu\n", sizeof(y));
	printf("size of i c and s %zu, %zu, %zu and their sum %d\n", sizeof(y.i),sizeof(y.c),sizeof(y.s), sum_y);
	printf("The difference between the actual size and the ideal size is %d\n", total_size_y-sum_y);	
	printf("\n\n\n");
	printf("Struct z\n");
	printf("size of the structure memory area %zu\n", sizeof(z));
	printf("size of i c and s %zu, %zu, %zu and their sum %d\n", sizeof(z.i),sizeof(z.c),sizeof(z.s), sum_z);
	printf("The difference between the actual size and the ideal size is %d\n", total_size_z-sum_z);	
	printf("\n\n\n");
	return 0;
}
