// Problem: Find a nax element in the array S
// Input: array S
// Output: max element in S

#include <iostream>
#include <stdio.h>

using namespace std;

int fmax(int A[], int n);

int main() 
{
    int A[5] = { 1, 2, 3, 4, 5};
    int result = fmax(A, 5);

    cout << "List A의 최대값은 " << result << "입니다.";
}


int fmax(int A[], int n)
{
    int max = A[1];

    for (int i = 0; i < n ; i++ ) {
        if (max < A[i])
            max = A[i];
    }

    return max;
}