/* Topic: Binary Tree Traversal - Preorder, Inorder, Postorder
    Name: Mirza Mohibul Hasan
    ID:190119
    1st year,2nd Semester
    Dept. of CSE
    Jashore University of Science and Technology
*/
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node {
    int data;
    struct node* left;
    struct node* right;
};

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* Given a binary tree, print its nodes according to the
  "bottom-up" postorder traversal. */
void printPostorder(struct node* node)
{
    if (node == NULL)
        {
            return;
        }

    // first recur on left subtree
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // now deal with the node
    printf("%d ", node->data);
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
    if (node == NULL)
        {
            return;
        }

    /* first recur on left child */
    printInorder(node->left);

    /* then print the data of node */
    printf("%d ", node->data);

    /* now recur on right child */
    printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
    if (node == NULL)
        {
            return;
        }

    printf("%d ", node->data);

    printPreorder(node->left);   //left sutree

    printPreorder(node->right);  //right subtree
}
/*
                3
              /  \
             4    23
           / \    / \
          7  11  34  52
            /        / \
           16       71  88
*/

/* Driver program to test above functions*/
int main()
{
    struct node* root;
    root = newNode(3);
    root->left = newNode(4);
    root->right = newNode(23);
    root->left->left = newNode(7);
    root->left->right = newNode(11);
    root->right->left = newNode(34);
    root->right->right = newNode(52);
    root->left->right->left = newNode(16);
    root->right->right->left = newNode(71);
    root->right->right->right = newNode(88);

    printf("Preorder Traversal: ");
    printPreorder(root);

    printf("\nInorder Traversal: ");
    printInorder(root);

    printf("\nPostorder Traversal: ");
    printPostorder(root);

    getchar();
    return 0;
}

