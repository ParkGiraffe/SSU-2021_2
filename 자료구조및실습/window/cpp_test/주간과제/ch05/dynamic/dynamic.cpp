#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "�� �� ���� ������ �Է��Ͻðڽ��ϱ�?";
    cin >> size;

    int *arr = new int[size];

    cout << "���� �Է��� �� ������ŭ ������ �Է��� �� ����Ű�� �����ּ���." <<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float avr = (float)sum / (float)size;

    cout << "������ �� ���� " << sum << "�̸�, ����� " << avr << "�Դϴ�." << endl;

    delete[] arr;

    return 0;
}