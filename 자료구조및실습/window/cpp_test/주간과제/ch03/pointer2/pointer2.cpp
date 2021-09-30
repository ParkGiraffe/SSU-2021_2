#include <iostream>
using namespace std;

int main() {

    int a = 123;
    int *p = &a;

    cout << "p = " << p << endl;

    *p = 789;


    // 정보를 출력
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}