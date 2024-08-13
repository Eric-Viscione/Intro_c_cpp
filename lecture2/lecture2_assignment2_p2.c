#include <stdio.h>
void amazeWOW() {
	int i;
	printf("amazeWOW:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void amaze1(){
	int i = 1;
	printf("amaze1:\t");
	while(i<10){
		printf("%d ", i);
		i = i+2;
	}
	printf("\n");
}

void amaze2(){
	int i = 0;
	printf("amaze2\t");
	goto stater;
	stater:
	i++;
	switch(i){
		case 1:
			printf("%d ", i);
			break;
		case 3:
			printf("%d ", i);
			break;
		case 5:
			printf("%d ", i);
			break;
		case 7:
			printf("%d ", i);
			break;
		case 9:
			printf("%d ", i);
			break;
		default:
	}
	if(i<10){
		goto stater;
	}
	printf("\n");
}
void amaze3(){
	int i = 1;
	printf("amaze3:\t");
	do {
		printf("%d ", i);
		i = i +2;
     	} while(i <10);
	printf("\n");
}
void amaze4(){
	printf("amaze4:\t");
	for(int i = 1; i<=10; i = i+2){
		printf("%d ", i);
	}
	printf("\n");
}
void amaze5(){
	printf("amaze5:\t");
	for(int i = 0; i<=9; i++){
		i++;
		if(i ==1){
			printf("%d ", i);
		}
		else{
			printf("%d ", i);
		}
		
	}
	printf("\n");
}

void amaze6(){
	printf("amaze6:\t");
	for(int i = 0; i<10; i++){
		if(i == 1){
			printf("%d ", i);
		}
		else if(i == 3){
			printf("%d ", i);
		}
		else if(i == 5){
			printf("%d ", i);
		}
		else if(i == 7){
			printf("%d ", i);
		}
		else if(i == 9){
			printf("%d ", i);
		}
	}
	printf("\n");
}
			
int main(){
	amazeWOW();
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	printf("\n");
	return 0;
}
