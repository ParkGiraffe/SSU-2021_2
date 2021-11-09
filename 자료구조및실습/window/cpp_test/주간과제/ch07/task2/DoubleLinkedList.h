#pragma once

typedef struct nodeData
{
    char name[20];
    char phone[14];
} NODE_DATA;

typedef struct nodeRecord
{
    struct nodeRecord *Prev; //DLinkedList���� �߰�
    //int Data;
    NODE_DATA Data;
    struct nodeRecord *Next;
} NODE;


class DLinkedList
{
private:
    NODE *Head, *Tail;

public:
    DLinkedList(void);
    ~DLinkedList(void);

    // ��� �߰�
    void Add(char name[], char phone[]);

    // ��� ����
    void Remove(char phone[]);
    void RemoveLastNode();
    void RemoveAll();

    // ��ü ��� ����
    int Count();

    // ��� ��� ���
    void PrintAllList();

    // ��� ��� �ݴ�� ���
    void PrintAllListReverse(); //DLinkedList���� �߰�

    // bool Exist(int Item);

    // void InsertAfter (int TargetItem, int Item);

    // void InsertBefore (int TargetItem, int Item);
};