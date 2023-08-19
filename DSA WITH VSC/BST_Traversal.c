/* Topic: Binary Tree Traversal - Preorder, Inorder, Postorder
    Name: Mirza Mohibul Hasan
    ID:190119
    1st year,2nd Semester
    Dept. of CSE
    Jashore University of Science and Technology
    Email: mirzamohibul618@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data)
{
    struct Node* Node;
    Node = (struct Node*)malloc(sizeof(struct Node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}
void PreOrder(struct Node* Node)
{
    if (Node == NULL)
        {
            return;
        }

    printf("%d ",Node->data);
    PreOrder(Node->left);
    PreOrder(Node->right);
}


void InOrder(struct Node* Node)
{
    if (Node == NULL)
        {
            return;
        }
    InOrder(Node->left);
    printf("%d ",Node->data);
    InOrder(Node->right);
}


void PostOrder(struct Node* Node)
{
    if (Node == NULL)
        {
            return;
        }

    PostOrder(Node->left);
    PostOrder(Node->right);
    printf("%d ",Node->data);
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
int main()
{
    struct Node* root;
    root = createNode(3);
    root->left = createNode(4);
    root->right = createNode(23);
    root->left->left = createNode(7);
    root->left->right = createNode(11);
    root->right->left = createNode(34);
    root->right->right = createNode(52);
    root->left->right->left = createNode(16);
    root->right->right->left = createNode(71);
    root->right->right->right = createNode(88);

    printf("Preorder Traversal: ");
    PreOrder(root);

    printf("\nInorder Traversal: ");
    InOrder(root);

    printf("\nPostorder Traversal: ");
    PostOrder(root);

    return 0;
}
