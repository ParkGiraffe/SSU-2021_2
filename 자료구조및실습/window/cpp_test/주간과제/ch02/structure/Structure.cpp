#include <iostream>

using namespace std;

// "StudenInfo"��� ����ü ����
struct StudentInfo {
    char bloodType;
    int stdNumber;
    float grade;
};

int main() {
    StudentInfo st1 = {'B', 20190320, 4.5f};
    StudentInfo st2 = {'A', 20190321, 1.3f};

    cout << "�й� : " << st1.stdNumber << endl;
    cout << "���� : " << st1.grade << endl;
    cout << "������ : " << st1.bloodType << endl;

    cout << "�й� : " << st2.stdNumber << endl;
    cout << "���� : " << st2.grade << endl;
    cout << "������ : " << st2.bloodType << endl;

    return 0;
};