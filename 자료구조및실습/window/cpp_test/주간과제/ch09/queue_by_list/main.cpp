#include <iostream>
#include "QueueByCircularLinkedList.h"
#include "StackByLinkedList.h"

using namespace std;

bool testMatched(char []);
const int MAX = 100;

int main() {
    char str[MAX];

    while (true) {
        cout << "ȸ�� �˻��� ���ڿ��� �����ڿ��� �Է��ϼ���." << endl
             << "'o'�� �Է��ϸ� ���α׷��� ����˴ϴ�." << endl;

        cin >> str;

        if (str[0] == '0')
            return 0;
        
        cout << testMatched(str) << endl;
    }

    return 0;
}

bool testMatched(char str[]) {
    StackByLinkedList stack;
    QueueByCircularLinkedList queue;

    for (int i = 0; i < MAX; i++) {
        if (str[i] == '\0')
            break;
        else {
            stack.Push(str[i]);
            queue.enQueue(str[i]);
        }
    }

    while (!stack.IsEmpty()) {
        if (stack.Pop() != queue.deQueue())
            return false;
    }
    return true;
}
