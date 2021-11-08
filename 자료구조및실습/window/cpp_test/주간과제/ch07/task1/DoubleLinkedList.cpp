#include <iostream>
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

void DLinkedList::Add(int Item)
{
    bool checkItem = Exist(Item);

    if (checkItem == true)
    {
        cout << "�Է��� " << Item << "�� �̹� ����Ʈ�� ��ϵǾ� �ֽ��ϴ�." << endl;
    }
    else
    {
        NODE *temp = new NODE;

        temp->Data = Item;
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

}

void DLinkedList::Remove(int Item)
{
    if (Head == NULL)
    {
        cout << "��� �ִ� ����Ʈ�Դϴ�." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    // ���� ��� ��带 ã��
    while (temp != NULL && temp->Data != Item)
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
        cout << temp->Data;
        temp = temp->Next;

        if (temp != NULL) cout << ",";
    }

    cout << ")" << endl;
}

// ��� ��� �ݴ�� ���
void DLinkedList::PrintAllListReverse()
{
    cout << "Reverse List = (";
    NODE *temp = Tail;

    while (temp != NULL) {
        cout << temp->Data;
        temp = temp->Prev;

        if (temp != NULL) cout << ",";
    }

    cout << ")" << endl;

}

bool DLinkedList::Exist(int Item)
{
    NODE *temp = Head;

    while (temp != NULL) {
        if (temp->Data == Item) return true;
        temp = temp->Next;
    }
    return false;
}

void DLinkedList::InsertAfter(int TargetItem, int Item)
{
    NODE *temp = Head;

    while (temp != NULL) {
        if (temp->Data == TargetItem)
        {
            if (temp->Next == NULL) // Ÿ���� �� ��尡 Tail�� ��� 
            {
                NODE *insertNode = new NODE;

                insertNode->Data = Item;
                insertNode->Prev = NULL;
                insertNode->Next = NULL;

                insertNode->Prev = temp;
                temp->Next = insertNode;
                Tail = insertNode;
            }
            else
            {
                NODE *insertNode = new NODE;

                insertNode->Data = Item;
                insertNode->Prev = NULL;
                insertNode->Next = NULL;

                insertNode->Next = temp->Next;
                insertNode->Prev = temp;
                temp->Next->Prev = insertNode;
                temp->Next = insertNode;

            }
            return;
        }
        temp = temp->Next;
    }
    cout << "Error : " << TargetItem << " ���� ���� ��尡 �������� �ʽ��ϴ�." << endl;
    return;
    
}

void DLinkedList::InsertBefore(int TargetItem, int Item)
{
    NODE *temp = Head;

    while (temp != NULL) {
        if (temp->Data == TargetItem)
        {
            if (temp->Prev == NULL) // Ÿ���� �� ��尡 Head�� ��� 
            {
                NODE *insertNode = new NODE;

                insertNode->Data = Item;
                insertNode->Prev = NULL;
                insertNode->Next = NULL;

                insertNode->Next = temp;
                temp->Prev = insertNode;
                Head = insertNode;
            }
            else
            {
                NODE *insertNode = new NODE;

                insertNode->Data = Item;
                insertNode->Prev = NULL;
                insertNode->Next = NULL;

                insertNode->Next = temp;
                insertNode->Prev = temp->Prev;
                temp->Prev->Next = insertNode;
                temp->Prev = insertNode;

            }
            return;
        }
        temp = temp->Next;
    }
    cout << "Error : " << TargetItem << " ���� ���� ��尡 �������� �ʽ��ϴ�." << endl;
    return;
    
}