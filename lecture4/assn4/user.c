#include <stdio.h>
#include "bintree.h"
#include <stdlib.h>
int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/
	for(int i = 0; i< 10; i++){
		int rand_id = rand()%50;
		int rand_data = rand()%100;
		printf("ID %d has a value of %d\n", rand_id, rand_data);
		insert_node(rand_id, rand_data);
	}
	for(int i = 0; i<50; i++){
		int data = find_node_data(i);
		if(data != -1){
			printf("Node ID: %d, data: %d\n", i,data);
		}
		else{
			printf("Could not find that node\n");

		}
	}
	
	return 0;
}
