#include <iostream>
#include <stdio.h>
using namespace std;

// Input: List S, x
// Output: Yes if x is in S. Otherwise No.

bool search(int S[], int x, int n);

int main() 
{
    int n = 5;
    int S[n] = {1, 2, 3, 4, 5};
    int x;

    cout << "찾고자 하는 수를 입력하세요." << endl;
    cin >> x;

    cout << search(S, x, n) << endl;

}


bool search(int S[], int x, int n)
{
    for (int i = 0; i < n; i++) {
        if (S[i] == x) {
            return true;
        }
    }

    return false;
}