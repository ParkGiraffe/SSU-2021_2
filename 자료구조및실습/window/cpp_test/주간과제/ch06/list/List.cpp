#include "List.h"
#include <iostream>

using namespace std;

List::List() {
    Count = 0;
}

List::~List() {}

void List::Insert(int Position, int Item) {
    if (Count == MAX) 
        cout << "����Ʈ�� �� �� �ֽ��ϴ�." << endl;
    else if (Position > Count + 1 || Position < 1)
        cout << "Postion�� ������ ������ϴ�." << endl;
    else {
        for (int i = Count - 1; i >= Position - 1; i--) {
            Data[i+1] = Data[i];
        }

        Data[Position - 1] = Item;

        Count++;
    }
}

void List::Delete(int Postion) {
    if (Postion < 1 || Postion > Count) 
        cout << "Position�� ������ ������ϴ�." << endl;
    else {
        for (int i = Postion; i < Count - 1; i++) {
            Data[i - 1] = Data[i];
        }

        Count --;
    }
}

void List::Retrieve(int Postion, int *ItemPtr) {
    if (Postion < 1 || Postion > Count)
        cout << "Postion�� ������ ������ϴ�." << endl;
    else
        *ItemPtr = Data[Postion - 1];
}

bool List::IsEmpty() {
    return (Count == 0);
}

int List::Length() {
    return Count;
}

void List::PrintItem() {
    if (Count < 1)
        cout << "�� ����Ʈ�Դϴ�." << endl;
    else {
        cout << "��ġ\tData"<<endl;

        for (int i = 0; i < Count; i++) {
            cout << i + 1 <<"\t" << Data[i] << endl;
        }

        cout << "����Ʈ�� ���Դϴ�." << endl;
    }
}