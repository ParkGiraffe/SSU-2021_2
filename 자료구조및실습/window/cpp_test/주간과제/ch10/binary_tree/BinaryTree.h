#pragma once

typedef char element;

typedef struct treeNode
{
    element data;
    treeNode *left;
    treeNode *right;
} NODE_TREE;

class BinaryTree
{
protected:
    NODE_TREE *root;
public:
    BinaryTree(void);
    ~BinaryTree(void);

    void setRoot(NODE_TREE *node);
    NODE_TREE *getRoot();
    NODE_TREE *makeNode(
        element item,
        NODE_TREE *left = NULL,
        NODE_TREE *right = NULL);
    bool isEmpty();

    void preorder(NODE_TREE *node); // 전위순회, 인자는 root node
    void inorder(NODE_TREE *node); // 중위순회
    void postorder(NODE_TREE *node); // 후위순회

    int getCount(NODE_TREE *node); // 인자는 root node
    int getHeight(NODE_TREE *node);
    int getLeafCount(NODE_TREE *node);

    void deleteNode(NODE_TREE *node);
};
