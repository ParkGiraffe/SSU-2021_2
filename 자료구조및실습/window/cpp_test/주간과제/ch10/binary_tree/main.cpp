#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main()
{
    BinaryTree bt;


    // Make Ninary Tree
    //       -
    //    *     /
    // A   B   C   D

    NODE_TREE *nodeA = bt.makeNode('A', NULL, NULL);
    NODE_TREE *nodeB = bt.makeNode('B', NULL, NULL);
    NODE_TREE *nodeMut = bt.makeNode('*', nodeA, nodeB);
    NODE_TREE *nodeC = bt.makeNode('C', NULL, NULL);
    NODE_TREE *nodeD = bt.makeNode('D', NULL, NULL);
    NODE_TREE *nodeDiv = bt.makeNode('/', nodeC, nodeD);
    NODE_TREE *nodeMin = bt.makeNode('-', nodeMut, nodeDiv);

    cout << endl;

    bt.setRoot(nodeMin);

    cout << endl;

    cout << "preorder : ";
    bt.preorder(bt.getRoot());
    cout << endl;

    cout << "preorder : ";
    bt.inorder(bt.getRoot());
    cout << endl;

    cout << "preorder : ";
    bt.postorder(bt.getRoot());
    cout << endl;

    cout << endl;
    cout << "����� ���� : " << bt.getCount(bt.getRoot()) << endl;
    cout << "�ܸ������ ���� : " << bt.getLeafCount(bt.getRoot()) << endl;
    cout << "Ʈ���� ����(����) : " << bt.getHeight(bt.getRoot()) << endl;

    cout << endl;

    return 0;
}