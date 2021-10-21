#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n < 2) // 베이스케이스 : F(0) = F(1) = 1
        return 1;

    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}



int main() {
    cout << Fibonacci(5);
    
    cout << endl;

    return 0;
}