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

    if (Head == NULL) // 리스트가 전부 비어있는 경우
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
        cout << "비어 있는 리스트입니다." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    // 삭제 대상 노드를 찾음
    while (temp != NULL && temp->Data.phone != phone)
    {
        prev = temp;
        temp = temp->Next;
    }

    // 삭제 대상 노드가 없음
    if (temp == NULL)
    {
        cout << "삭제할 노드가 없습니다." << endl;
        return;
    }

    // temp가 하나도 전진하지 않았음 => 삭제 대상이 첫 노드임
    if (prev == NULL)
    {
        Head = Head->Next;
        Head->Prev = NULL;
        delete temp;
    } 
    else // 삭제 대상이 있음.
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
        cout << "비어 있는 리스트입니다." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    // 리스트에 노드가 하나만 있는 경우 첫 번째 노드 삭제
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

// 모든 노드 반대로 출력
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
