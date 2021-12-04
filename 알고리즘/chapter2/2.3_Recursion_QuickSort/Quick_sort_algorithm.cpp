#include <iostream>
#include <stdio.h>

using namespace std;

int S[8] = {3, 6, 7, 1, 2, 4, 8, 5};

void partition (int low, int high, int& pivotpoint) {
    int i, j;
    int pivotitem;

    pivotitem = S[low];
    j = low;
    for (i = low + 1 ; i <= high; i++) {
        if (S[i] < pivotitem) {
            j++;
            int exchange1 = S[i];
            S[i] = S[j];
            S[j] = exchange1;
        }
    }

    pivotpoint = j;
    int exchange2 = S[low];
    S[low] = S[pivotpoint];
    S[pivotpoint] = exchange2;
}

void quicksort (int low, int high) {
    int pivotpoint;
    if (high > low) {
        partition(low, high, pivotpoint);
        quicksort(low, pivotpoint - 1);
        quicksort(pivotpoint + 1, high);
    }
}

int main() {
    quicksort(0, 7);
    // 결과 확인
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", S[i]);
    }
    return 0;
}
