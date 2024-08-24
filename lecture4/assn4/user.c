#include <stdio.h>
#include "bintree.h"
#include <stdlib.h>
extern node *root;
// Function to print the tree nodes in order (for verification)
void print_inorder(node* root) {
    if (root != NULL) {
        print_inorder(root->left);
        printf("Node ID: %d, Data: %d\n", root->node_id, root->data);
        print_inorder(root->right);
    }
}

int main() {
    // Insert nodes into the tree
    insert_node(10, 100);
    insert_node(5, 50);
    insert_node(15, 150);
    insert_node(2, 20);
    insert_node(7, 70);
    insert_node(12, 120);
    insert_node(17, 170);

    printf("Initial tree (in-order traversal):\n");
    print_inorder(root);
    printf("\n");

    // Test cases for removing nodes
    printf("Removing node with ID 7:\n");
    remove_node(7);
    print_inorder(root);
    printf("\n");

    printf("Removing node with ID 10 (root node):\n");
    remove_node(10);
    print_inorder(root);
    printf("\n");

    printf("Removing node with ID 15:\n");
    remove_node(15);
    print_inorder(root);
    printf("\n");

    printf("Removing node with ID 2:\n");
    remove_node(2);
    print_inorder(root);
    printf("\n");

    printf("Removing node with ID 17:\n");
    remove_node(17);
    print_inorder(root);
    printf("\n");

    // Attempt to remove a non-existent node
    printf("Removing node with ID 100 (non-existent):\n");
    remove_node(100);
    print_inorder(root);
    printf("\n");

    // Final state of the tree
    printf("Final tree (in-order traversal):\n");
    print_inorder(root);
    printf("\n");

    return 0;
}