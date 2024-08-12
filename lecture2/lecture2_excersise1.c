#include <stdio.h>



int triangular_number(int n){
	int triangle = 0;
	triangle = (n*(n+1))/2;
	
	return triangle;


}
int main() {
	int x = 100;
	int triangle_num =0;
	for(int i = 0; i <= x; i++){
		triangle_num = triangular_number(i);
		printf("Triangular number %d is %d\n", i, triangle_num);
	}
	return 0;
}

