#include <stdio.h>

void square(int *num) {
	
	*num = *num * *num;
}

int main() {
	int x = 4;
	int *ptr =&x;
	square(ptr);
	printf("%d\n", *ptr);
	return 0;
}
