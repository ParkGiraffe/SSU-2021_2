#include <iostream>
using namespace std;

void countdown(int n) {
    if (n < 1) {

        cout << "Launch" << endl;
        return;
    }

    else {
        cout << n << endl;
        countdown(n - 1);
    }

}

int main() {
    cout << "ī���ٿ��� �����մϴ�" << endl;

    countdown(10);

    return 0;
}