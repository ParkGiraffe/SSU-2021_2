#include <iostream>
using namespace std;

struct StudentInfo {
    char name[20];
    int stdNumber;
    float grade[2];
};

int main() {
    StudentInfo stdInfos[5] = {
        {"Park yo sep", 20190320, { 4.1f, 4.1f }},
        {"Kim yo sep", 20190320, { 1.1f, 1.1f }},
        {"Choi yo sep", 20190320, { 3.1f, 1.1f }},
        {"Lee yo sep", 20190320, { 2.1f, 3.1f }},
        {"Jo yo sep", 20190320, { 4.5f, 2.1f }},
    };

    for (int i = 0; i < 5; i++) {
        cout << stdInfos[i].name << " : ";
        cout << stdInfos[i].stdNumber << " : ";
        cout << stdInfos[i].grade[0] << ", " << stdInfos[i].grade[1] << endl;


    }

    return 0;

}