#include <stddef.h>
#include "bintree.h"
#include <stdlib.h>
#include <stdio.h>
///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
	node* new_node = malloc(sizeof(node));
	if(new_node == NULL){
		printf("The new node could not be initialized");
		exit(1);
	}
	new_node->data = data;
	new_node->node_id = node_id;
	new_node->left = NULL;
	new_node->right = NULL;
	node* current_node = root;
	node* parent_node = NULL;
	if(root == NULL){
		root = new_node;
	}
	else{
		while(current_node != NULL){
			parent_node = current_node;
			if(new_node->node_id < current_node->node_id){
				current_node = current_node->left;
			}
			else{
				current_node = current_node->right;
			}
		}
		if(new_node->node_id < parent_node->node_id){
			parent_node->left = new_node;
		}
		else{
			parent_node->right = new_node;
		}
	}

}


// Find the node with node_id, and return its data
int find_node_data(int node_id) {
	struct node* current = root;
	//printf("The node id we are looking for is: %d\n", node_id);
	
	while(current != NULL){
		//printf("We are currently looking at %d\n", current->node_id);
		if(node_id == current->node_id){
			return current->data;
		}
		else if(node_id < current->node_id){
			current = current->left;
		}
		else{
			current = current->right;
		}
	}
	return -1;
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
/*//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	
}
*/
