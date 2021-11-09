#include <iostream>
#include <cstring>
#include "DoubleLinkedList.h"

using namespace std;

DLinkedList::DLinkedList(void)
{
    Head = NULL;
    Tail = NULL;
}

DLinkedList::~DLinkedList(void)
{
    RemoveAll();
}



void DLinkedList::Add(char name[], char phone[])
{
    NODE *temp = new NODE;

    strcpy(temp->Data.name, name);
    strcpy(temp->Data.phone, phone);    
    
    // cout << temp->Data.name << endl;
    // cout << temp->Data.phone << endl;

    temp->Prev = NULL;
    temp->Next = NULL;

    if (Head == NULL) // ����Ʈ�� ���� ����ִ� ���
    {
        Head = temp;
        Tail = temp;
    }
    else
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }
}


void DLinkedList::Remove(char phone[])
{
    if (Head == NULL)
    {
        cout << "��� �ִ� ����Ʈ�Դϴ�." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    // ���� ��� ��带 ã��
    while (temp != NULL && temp->Data.phone != phone)
    {
        prev = temp;
        temp = temp->Next;
    }

    // ���� ��� ��尡 ����
    if (temp == NULL)
    {
        cout << "������ ��尡 �����ϴ�." << endl;
        return;
    }

    // temp�� �ϳ��� �������� �ʾ��� => ���� ����� ù �����
    if (prev == NULL)
    {
        Head = Head->Next;
        Head->Prev = NULL;
        delete temp;
    } 
    else // ���� ����� ����.
    {
        prev->Next = temp->Next;
        if (temp->Next != NULL) temp->Next->Prev = prev;
        delete temp;
    }
}



void DLinkedList::RemoveLastNode()
{
    if (Head == NULL)
    {
        cout << "��� �ִ� ����Ʈ�Դϴ�." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    // ����Ʈ�� ��尡 �ϳ��� �ִ� ��� ù ��° ��� ����
    if (Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
        return;
    }
    else
    {
        prev = Tail->Prev;
        prev->Next = NULL;

        delete Tail;
        Tail = prev;
    }
}

void DLinkedList::RemoveAll()
{
    NODE *temp = Head;

    while (Head != NULL)
    {
        temp = Head;
        Head = Head->Next;
        delete temp;
        temp = NULL;
    }

    Tail = NULL;
}

int DLinkedList::Count()
{
    int count = 0;
    NODE *temp = Head;
    
    while (temp != NULL)
    {
        count ++;
        temp = temp->Next;
    }

    return count;
}

void DLinkedList::PrintAllList()
{
    cout << "List = (";
    NODE *temp = Head;

    while (temp != NULL)
    {
        cout << temp->Data.name << ": " << temp->Data.phone;
        temp = temp->Next;

        if (temp != NULL) cout << ", ";
    }

    cout << ")" << endl;
}

// ��� ��� �ݴ�� ���
void DLinkedList::PrintAllListReverse()
{
    cout << "Reverse List = (";
    NODE *temp = Tail;

    while (temp != NULL) {
        cout << temp->Data.name << ": " << temp->Data.phone << endl;
        temp = temp->Prev;

        if (temp != NULL) cout << ",";
    }

    cout << ")" << endl;

}
