#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

void menu();

int main()
{
    BinarySearchTree bst;
    char key[10];
    char choice[2];
    NODE_TREE *foundNode = NULL;

    while (true)
    {
        menu();
        cin >> choice;

        switch (choice[0])
        {
        case '1':
            cout << "[����Ʈ�� ���] root : ";
            cout << bst.getRoot()->key;
            cout << endl;
            
            cout << "[����Ʈ�� ���] preorder : ";
            bst.preorder(bst.getRoot());
            cout << endl;
            
            cout << "[����Ʈ�� ���] inorder : ";
            bst.inorder(bst.getRoot());
            cout << endl;
            
            cout << "[����Ʈ�� ���] postorder : ";
            bst.postorder(bst.getRoot());
            cout << endl;

            break;

        case '2' :
            cout << "������ ���ڸ� �Է��ϼ��� : ";
            cin >> key;
            
            bst.insertNode(stoi(key));
            break;
            // cpp ���� stringŸ�� ���ڿ��� ���ڷ� �ٲٴ� �Լ�
            // stoi = string to int
            // stof = string to float
            // stol = string to long
            
            // stod = string to double2
            
            
        case '3' :
            cout << "������ ���ڸ� �Է��ϼ��� : ";
            cin >> key;
            
            bst.deleteNode(bst.getRoot(), stoi(key));
            break;

        case '4' :
            cout << "ã�� ���ڸ� �Է��ϼ��� : ";
            cin >> key;

            foundNode = bst.searchBST(bst.getRoot(), stoi(key));

            if (foundNode != NULL)
            {
                cout << endl
                     << foundNode->key << "�� ã�ҽ��ϴ�." << endl;
            }
            else
            {
                cout << endl
                     << "���ڸ� ã�� ���߽��ϴ�." << endl;
            }
            break;

        case '5' :
            return 0;

        default:
            cout << endl    
                 << "�߸� �����ϼ̽��ϴ�." << endl;
            break;
        }
    }

    return 0;
}

void menu()
{
    cout << endl
         << "-----------------------------------";
    cout << endl
         << "\t1 : Ʈ�� ���";
    cout << endl
         << "\t2 : ���� ����";
    cout << endl
         << "\t3 : ���� ����";
    cout << endl
         << "\t4 : ���� �˻�";
    cout << endl
         << "\t5 : ����";
    cout << endl
         << "-----------------------------------";
    cout << endl
         << "�޴� �Է� >> ";

}