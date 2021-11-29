#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

NODE_TREE* BinarySearchTree::searchBST(NODE_TREE *node, element x)
{
    if (node == NULL)
        return NULL;
    else if (x == node->key)
        return node;
    else if (x < node->key)
        return searchBST(node->left, x);
    else
        return searchBST(node->right, x);
    
}

void BinarySearchTree::insertNode(element x)
{
    NODE_TREE *node = new NODE_TREE;
    node->key = x;
    node->right = NULL;
    node->left = NULL;
    NODE_TREE *p = root;
    NODE_TREE *q = p;

    while (p != NULL)
    {
        if (x == p->key)
            return;
        q = p;
        if (x < p->key)
            p = p->left;
        else 
            p = p->right;
    }

    
    if (root == NULL)
        root = node;
    else if (x < q->key)
        q->left = node;
    else
        q->right = node;
   
    return;
}

void BinarySearchTree::deleteNode(NODE_TREE *node, element x)
{
    //NODE_TREE *p = searchBST(node, x);

    NODE_TREE *p = node;
    NODE_TREE *parent = p;

    while (p != NULL)
    {
        if (x == p->key)
            break;
        parent = p;
        if (x < p->key)
            p = p->left;
        else 
            p = p->right;
    }


    if (p == NULL)
        return;
    if (p->left == NULL && p->right == NULL)
    {
        if (parent->left == p)
            parent->left = NULL;
        else
            parent->right = NULL;
    }
    else if (p->left == NULL || p->right == NULL)
    {
        if (p->left != NULL)
        {
            if (parent->left == p)
                parent->left = p->left;
            else
                parent->right = p->left;
        }
        else
        {
            if (parent->left == p)
                parent->left = p->right;
            else
                parent->right = p->right;
        }
    }
    else if (p->left != NULL && p->right != NULL)
    {
        NODE_TREE *heirNode = p->left;

        while (heirNode->right != NULL)
        {
            heirNode = heirNode->right;
        }
        p->key = heirNode->key;
        deleteNode(p->left, p->key);
    }

}