#include <iostream>
#include "QueueByCircularLinkedList.h"

using namespace std;

int main() {
    const int N = 41;
    const int M = 3;

    QueueByCircularLinkedList Q;

    // Josephus�� ���� ����
    for (int i = 0; i < N; i++) {
        Q.enQueue(i+1);
    }

    while(Q.GetSize() >= M) {
        Q.enQueue(Q.deQueue());
        Q.enQueue(Q.deQueue());
        Q.deQueue();
    }


    cout << "������ �����ڰ� ���� �ڸ��� ��ȣ�� ";
    while (!Q.IsEmpty()) {
        cout << Q.deQueue();

        if (!Q.IsEmpty())
            cout << ", ";
    }

    cout << " �Դϴ�.";

    return 0;
}