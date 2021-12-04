#include <iostream>
#include <stdio.h>

using namespace std;

// Divide and Conquer

// Problem: Is the key x in the sorted array S of n keys?
// Input: n, sorted Array S indexed 1 to n, x    <<- input으로 주어진 Array S가 sorted되어 있어야 함. - 사전찾기
// Output: location of x in S (0 if x is not in S)

void binsearch (int n, int S[], int x, int& location);

int main() {
    int S[6] = {1, 5, 11, 15, 23, 38};
    int location;
    int x = 5;

    binsearch(6, S, x, location);

    cout << location + 1 << endl;

    return 0;
}

void binsearch (int n, int S[], int x, int& location) {
    int low, high, mid;
    low = 0;
    high = n-1;
    location = 0;

    while (low <= high && location == 0) {                   
        mid = (high + low) / 2;
        if (x == S[mid])
            location = mid;
        else if (x < S[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
}