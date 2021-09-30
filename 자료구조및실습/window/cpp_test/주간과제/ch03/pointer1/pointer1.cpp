#include <iostream>
using namespace std;

int main() {

    // 일반적인 변수를 정의
    int a = 123;

    // 포인터 변수를 정의
    int *p;

    p = &a;

    // 정보를 출력
    cout << "&a = " << &a << endl;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;

    return 0;
}