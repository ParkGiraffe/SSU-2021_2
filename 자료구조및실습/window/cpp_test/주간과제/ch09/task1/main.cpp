#include <iostream>
#include "QueueByCircularLinkedList.h"

using namespace std;

int main() {
    const int N = 41;
    const int M = 3;

    QueueByCircularLinkedList Q;

    // Josephus의 문제 로직
    for (int i = 0; i < N; i++) {
        Q.enQueue(i+1);
    }

    while(Q.GetSize() >= M) {
        Q.enQueue(Q.deQueue());
        Q.enQueue(Q.deQueue());
        Q.deQueue();
    }


    cout << "마지막 생존자가 앉은 자리의 번호는 ";
    while (!Q.IsEmpty()) {
        cout << Q.deQueue();

        if (!Q.IsEmpty())
            cout << ", ";
    }

    cout << " 입니다.";

    return 0;
}