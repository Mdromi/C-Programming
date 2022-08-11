#include<stdio.h>
#include<stdlib.h>

//Create a Tree Node
typedef struct node Node;
struct node
{
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL)
    {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

//Adding node left child
void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

//Adding node right child
void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

//Now Create Tree
Node *create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);

    Node *eight = create_node(8);
    add_right_child(nine, eight);

    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);

    return two;
}
//Pre-Order Algorithm | root->LeftNode->RightNode
void pre_order(Node *node)
{
    printf("%d ", node->data);

    if(node->left != NULL)
    {
        pre_order(node->left);
    }

    if(node->right != NULL)
    {
        pre_order(node->right);
    }
}

//Post-Order Algorithm | LeftNode->RightNode->root
void post_order(Node *node)
{
    if(node->left != NULL)
    {
        post_order(node->left);
    }

    if(node->right != NULL)
    {
        post_order(node->right);
    }
    printf("%d ", node->data);
}

//In-Order Algorithm | LeftNode->root->RightNode
void in_order(Node *node)
{
    if(node->left != NULL)
    {
        in_order(node->left);
    }

    printf("%d ", node->data);

    if(node->right != NULL)
    {
        in_order(node->right);
    }
}

int main()
{
    Node *root = create_tree();

    //printf("%d\n", root->data);

    //pre-order print node of Tree | root -> LeftNode -> RightNode
    printf("Pre Order[root -> LeftNode -> RightNode]\n");
    pre_order(root);
    printf("\n\n");

    //Post-Order Algorithm | LeftNode->RightNode->root
    printf("Post Order[LeftNode -> RightNode -> root]\n");
    post_order(root);
    printf("\n\n");

    //In-Order Algorithm | LeftNode->root->RightNode
    printf("In Order[LeftNode -> RightNode -> root]\n");
    in_order(root);
    printf("\n\n");

    return 0;
}
