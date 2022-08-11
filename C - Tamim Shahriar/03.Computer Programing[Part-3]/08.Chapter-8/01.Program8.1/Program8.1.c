#include<stdio.h>

//CODE 8.1
typedef struct node Node;

struct node {
    int data;
    Node *parent;
    Node *left;
    Node *right;
};

//Creating A New Node
Node *create_node(int item)
{
    Node *new_node = (Node *) malloc(sizeof(Node));

    if(new_node == NULL)
    {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->parent = NULL;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

//Adding A new node data left child
void add_left_child(Node *node, Node *child){
    node->left = child;

    if(child != NULL)
    {
        child->parent = node;
    }
}

//Adding A new node data right child
void add_right_child(Node *node, Node *child)
{
    node->right = child;

    if(child != NULL)
    {
        child->parent = node;
    }
}

//CODE 8.2
//Adding A new node
Node *bst_insert(Node *root, Node *node)
{
    Node *parent_node, *current_node;

    if(root == NULL)
    {
        root = node;
        return root;
    }

    parent_node = NULL;
    current_node = root;

    //Finding The parent Node
    while (current_node != NULL)
    {
        parent_node = current_node; //

        if(node->data < current_node->data)
        {
            current_node = current_node->left;
        } else
        {
            current_node = current_node->right;
        }
    }

    if (node->data < parent_node->data)
    {
        add_left_child(parent_node, node);
    } else
    {
        add_right_child(parent_node, node);
    }

    return root;
}

//CODE 8.3
//Create BST
Node *create_bst()
{
    Node *root, *node;

    int i;
    int ara[] = {5, 17, 3, 7, 12, 19, 1, 4};

    root = create_node(10);

    for(i = 0; i < 8; i++)
    {
        node = create_node(ara[i]);
        root = bst_insert(root, node);
    }

    return root;
}

//CODE 8.5
//Node Search
Node *bst_search(Node *root, int item)
{
    Node *node = root;

    while(node != NULL)
    {
        if(node->data == item)
        {
            return node;
        }

        if(item < node->data)
        {
            node = node->left;
        } else
        {
            node = node->right;
        }
    }
    return node;
}
//CODE 8.7
//Get Minimum Node
Node *bst_minimum(Node *root)
{
    Node *node = root;

    while(node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

//CODE 8.8
//Transplant Node
Node *bst_transplant(Node *root, Node *current_node, Node *new_node)
{
    if(current_node == root)
    {
        root = new_node;
    }
    else if(current_node == current_node->parent->left)
    {
        add_left_child(current_node->parent, new_node);
    }
    else
    {
        add_right_child(current_node->parent, new_node);
    }

    return root;
}
//CODE 8.9
//Delete Node
Node *bst_delete(Node *root, Node *node)
{
    Node *smallest_node;

    if(node->left == NULL)
    {
        root = bst_transplant(root, node, node->right);
    } else if(node->right == NULL)
    {
        root = bst_transplant(root, node, node->left);
    } else
    {
        smallest_node = bst_minimum(node->right);
        if(smallest_node->parent != node)
        {
            root = bst_transplant(root, smallest_node, smallest_node->right);
            add_right_child(smallest_node, node->right);
        }
        root = bst_transplant(root, node, smallest_node);
        add_left_child(smallest_node, node->left);
    }
    free(node);

    return root;
}


//Printing Data Pre Order
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

//Printing Data In Order
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

//Printing Data In Order
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

//CODE 8.4
int main()
{
    Node *root = create_bst();

    //Calling Pre order
    printf("Pre order: ");
    pre_order(root);
    printf("\n");

    //Calling Post order
    printf("Post order: ");
    post_order(root);
    printf("\n");

    //Calling In order
    printf("In order: ");
    in_order(root);
    printf("\n\n");

    //CODE 8.6
    //Searching Node Item
    Node *node;

    node = bst_search(root, 7);
    if(node != NULL)
    {
        printf("%d\n", node->data);
    }else
    {
        printf("Node not fount!\n");
    }

    node = bst_search(root, 8);
    if(node != NULL)
    {
        printf("%d\n", node->data);
    }else
    {
        printf("Node not fount!\n");
    }

    //Searching Minimum Node Item
    node = bst_minimum(root);
    printf("Minimum Node Data: %d\n", node->data);

    //CODE 8.10
    //Delete Node
    printf("\nBST:\n");
    in_order(root);
    printf("\n\n");

    //1st Delete
    node = bst_search(root, 1);
    if(node != NULL)
    {
        printf("Will delete %d\n", node->data);
        root = bst_delete(root, node);

        printf("BST:\n");
        in_order(root);
        printf("\n\n");
    }
    else
    {
        printf("Node not found!\n\n");
    }

    //2nd Delete
    node = bst_search(root, 5);
    if(node != NULL)
    {
        printf("Will delete %d\n", node->data);
        root = bst_delete(root, node);

        printf("BST:\n");
        in_order(root);
        printf("\n\n");
    }
    else
    {
        printf("Node not found!\n\n");
    }

    //3rd Delete
    node = bst_search(root, 10);
    if(node != NULL)
    {
        printf("Will delete %d\n", node->data);
        root = bst_delete(root, node);

        printf("BST:\n");
        in_order(root);
        printf("\n\n");
    }
    else
    {
        printf("Node not found!\n\n");
    }


    return 0;
}
