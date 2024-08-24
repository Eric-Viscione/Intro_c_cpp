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
//Children nodes are fixed appropriately.*/
void remove_node(int node_id) {
	struct node* current = root;
	struct node* node_to_remove = NULL;
	struct node* parent = NULL;
	while(current != NULL){
		if(node_id == current->node_id){
			node_to_remove = current;
			break;
		}
		parent = current;
                if(node_id < current->node_id){
                        current = current->left;
                }
                else{
                        current = current->right;
                }
        }
	if(node_to_remove == NULL){
		printf("Node Could not be found");
		return;
	}
	//Leaf Node removal
	if(node_to_remove->left == NULL && node_to_remove->right == NULL){
   		if (node_to_remove == root) {
        	// Special case: the node is the root and has no children
        	root = NULL;
    		}
		else {
        	// The node is not the root, so we need to update the parent
			if (parent->left == node_to_remove) {
				parent->left = NULL;
       			}
			else if(parent->right == node_to_remove) {
            			parent->right = NULL;
        		}
		free(node_to_remove);
		}
	}
	//node has only left child
	else if(node_to_remove->left != NULL && node_to_remove->right == NULL){
		if(node_to_remove == root){
			root = node_to_remove->left;
		}
		else{
			if(parent->left == node_to_remove){
				parent->left = node_to_remove->left;
			}
			else if(parent->right == node_to_remove){
				parent->right = node_to_remove->left;
			}
		}
		free(node_to_remove);
	}
	//node has  only right child
	else if(node_to_remove->left == NULL && node_to_remove->right != NULL){
		if(node_to_remove == root){
                }
                else{
                        if(parent->left == node_to_remove){
                                parent->left = node_to_remove->right;
                        }
                        else if(parent->right == node_to_remove){
                                parent->right = node_to_remove->right;
                        }
                }

		free(node_to_remove);
	}
	else if(node_to_remove->left != NULL && node_to_remove->right != NULL){

		struct node* successor = node_to_remove->right;
        	struct node* successor_parent = node_to_remove;
		while(successor->left != NULL){
			successor_parent = successor;
			successor = successor->left;
		}
		node_to_remove->node_id = successor->node_id;
		if(successor_parent->left == successor){
			successor_parent->left = successor->right;
		}
		else{
			successor_parent->right = successor->right;
		}
		free(successor);
	}
}


