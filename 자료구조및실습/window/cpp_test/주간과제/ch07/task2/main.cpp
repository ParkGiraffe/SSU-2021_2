#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;

int main()
{
    DLinkedList list1;

    int roop = 1;
    while (roop != 0)
    {
        char name[20]; 
        char phone[14];
        cout << "�̸��� �Է��ϼ���" << endl;
        cin >> name;
        cout << "��ȭ��ȣ�� �Է��ϼ���" << endl;
        cin >> phone;

        // cout << name << ":" << phone << endl;
    
        list1.Add(name, phone);
        
        cout << endl;
        cout << "�Է��� �� �Ͻðڽ��ϱ�?  ��: 1, �ƴϿ�: 0 " << endl;
        cin >> roop;

    }

    list1.PrintAllList();


    return 0; 

}