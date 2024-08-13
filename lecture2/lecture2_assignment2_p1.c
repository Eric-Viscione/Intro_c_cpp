#include <stdio.h>

int main(int argc, char ** argv){
	int i = 1;
	goto printer;
	printer:
	printf("%s\n", argv[i]);
	i++;
	if(i < argc){
		goto printer;
	}
	else{
		return 0;
	}
}
