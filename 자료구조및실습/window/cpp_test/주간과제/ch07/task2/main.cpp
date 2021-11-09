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
        cout << "이름을 입력하세요" << endl;
        cin >> name;
        cout << "전화번호를 입력하세요" << endl;
        cin >> phone;

        // cout << name << ":" << phone << endl;
    
        list1.Add(name, phone);
        
        cout << endl;
        cout << "입력을 더 하시겠습니까?  네: 1, 아니오: 0 " << endl;
        cin >> roop;

    }

    list1.PrintAllList();


    return 0; 

}