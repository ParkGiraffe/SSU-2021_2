#include <iostream>
using namespace std;

int max (int a, int b) {
    return a > b ? a : b;
}

int main () {
    int ret = max(10, 20);

    cout << "10�� 20 �� ū ���� " << ret << "�Դϴ�." << endl;

    return 0;
}