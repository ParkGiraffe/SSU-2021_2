#include <iostream>
#include "QueueByArray.h"
using namespace std;

QueueByArray::QueueByArray(void) {
    front = 0;
    rear = -1;
    count = 0;
}

QueueByArray::~QueueByArray(void) {

}

void QueueByArray::enQueue(char item) {
    if (IsFull()) {
        cout << "ť�� �� �� �ֽ��ϴ�." << endl;
        return;
    } 

    rear = (rear + 1) % MAX;
    Queue[rear] = item;

    count++;

}

char QueueByArray::deQueue() {
    if (IsEmpty()) {
        cout << "ť�� ��� �ֽ��ϴ�." << endl;
        return '\0';
    }

    char data = Queue[front];
    front = (front + 1) % MAX;
    count --;

    return data;
}

bool QueueByArray::IsEmpty() {
    if (count == 0)
        return true;
    else
        return false;
}

bool QueueByArray::IsFull() {
    if (count == MAX)
        return true;
    else
        return false;
}

char QueueByArray::GetFront() {
    if (IsEmpty()) {
        cout << "ť�� ��� �ֽ��ϴ�." << endl;
        return '\0';
    }

    return Queue[front];
}

int QueueByArray::GetSize() {
    return count;
}