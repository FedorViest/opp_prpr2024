#include <stdio.h>
#include <stdlib.h>

/* https://stackoverflow.com/questions/17720223/c-typedef-struct-name-vs-typedef-struct-name */

/* Define the tree node structure */

/* typedef old_type new_type */

typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode_t;

/* Function prototypes */
struct TreeNode* createNode(int value);
int sumTree(TreeNode_t* root);

int main(void) {
    /* Create a sample tree */
    int total = 0;

    struct TreeNode* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);

    /* Calculate and print the sum */
    total = sumTree(root);
    printf("Sum of all values in the tree: %d\n", total);

    return 0;
}

/* Function to create a new tree node */
struct TreeNode* createNode(int value) {
    TreeNode_t* newNode = (TreeNode_t*)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/* Recursive function to calculate sum of all nodes */
int sumTree(TreeNode_t* root) {
    /* Base case: if node is NULL, return 0 */
    if (root == NULL) {
        return 0;
    }
    
    /* Recursive case: return current node's value plus sum of left and right subtrees */
    return root->value + sumTree(root->left) + sumTree(root->right);
}