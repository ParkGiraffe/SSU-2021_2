#include <iostream>
using namespace std;

void sum(int a, int b, int *ret) {
    *ret = a + b;
}

int main() {
    int ret = 0;
    sum(10, 20, &ret);

    cout << "10�� 20�� ���� ���� " << ret << "�Դϴ�." << endl;

    return 0;
}