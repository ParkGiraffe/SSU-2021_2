#include <iostream>
using namespace std;

int main() {

    // int Ÿ���� �迭 �����Ϳ� ���� �ǽ�
    int iArray[10];
    int *pi = &iArray[3];
    cout << "pi = " << pi << endl;
    cout << "pi + 1 = " << pi + 1 << endl;
    cout << "pi + 2 = " << pi + 2 << endl;
    cout << "pi - 1 = " << pi - 1 << endl;  

    // short Ÿ���� �迭 �����Ϳ� ���� �ǽ�
    short sArray[10];
    short *ps = &sArray[3];
    cout << "ps = " << pi << endl;
    cout << "ps + 1 = " << ps + 1 << endl;
    cout << "ps + 2 = " << ps + 2 << endl;
    cout << "ps - 1 = " << ps - 1 << endl;  

    return 0;
}