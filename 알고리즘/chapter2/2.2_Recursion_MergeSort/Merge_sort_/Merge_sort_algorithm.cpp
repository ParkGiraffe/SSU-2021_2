#include <iostream>
#include <stdio.h>

using namespace std;

// void mergesort(int n, int S[]){ // n == 10
//     int h = n / 2; //  h == 5 - 0 1 2 3 4
//     int m = n - h; //  m == 5 - 5 6 7 8 9
//     h = h-1;
//     m = m-1;

//     int U[h];
//     int V[m];

//     if (n > 1) {
//         for (int i = 0; i <= h; i++) { // 0 1 2 3 4
//             U[i] = S[i];
//         }
//         for (int i = h + 1; i < n; i++) { // 5, 6, 7, 8, 9
//             V[i-h-1] = S[i];
//         }

//         mergesort(h, U);
//         mergesort(m, V);
//         merge(h, m, U, V, S);
//     }
// }

// void merge(int h, int m, int U[], int V[], int S []) {
//     int i = 1;
//     int j = 1;
//     int k = 1;

//     while (i <= h && j <= m) {
//         if (U[i] < V[j]) {
//             S[k] = U[i];
//             i++;
//         } else {
//             S[k] = V[j];
//             j++;
//         }
//         k++;
//     }

//     if (i > h) {
//         for (int n = j; j <= m; n++) { // 0 1 2 3 4
//             S[i] = S[i];
//         }
//     }

// }

// int main() {

//     return 0;
// }


// --------------------------------------------------------------------------------
// int sorted[8]; // 정렬된 배열

// void merge(int *data, int low, int mid, int high)
// {
//     int i = low;
//     int j = mid + 1;
//     int k = low;
//     while (i <= mid && j <= high)
//     {
//         if (data[i] <= data[j])
//         {
//             sorted[k] = data[i];
//             i++;
//         }
//         else
//         {
//             //data[i] > data[j] 
//             sorted[k] = data[j];
//             j++;
//         }
//         k++;
//     }
//     if (i > mid)
//     {
//         for (int t = j; t <= high; t++)
//         {
//             sorted[k] = data[t];
//             k++;
//         }
//     }
//     else
//     {
//         for (int t = i; t <= mid; t++)
//         {
//             sorted[k] = data[t];
//             k++;
//         }
//     } 
    
//     // 정렬된 배열을 삽입
//     for (int t = low; t <= high; t++)
//     {
//         data[t] = sorted[t];
//     }
// }

// void merge_sort(int *data, int low, int high)
// {
//     if (low < high)
//     {
//         int mid = (low + high) / 2;
//         merge_sort(data, low, mid);   // 좌측 정렬
//         merge_sort(data, mid + 1, high); // 우측 정렬
//         merge(data, low, mid, high);
//     }
// }

// int main(void)
// {
//     int data[8] = {3, 6, 7, 1, 2, 4, 8, 5};
//     merge_sort(data, 0, 7);
//     // 결과 확인
//     for (int i = 0; i < 8; i++)
//     {
//         printf("%d ", data[i]);
//     }
//     return 0;
// }


// --------------------------------------------------------------------------------



int sorted[8];

void merge(int *data, int low, int mid, int high) {
    int leftTemp = low;
    int rightTemp = mid + 1;
    int dataTemp = low;

    while (leftTemp <= mid && rightTemp <= high) {
        if (data[leftTemp] < data[rightTemp]) {
            sorted[dataTemp] = data[leftTemp];
            leftTemp++;
        } else {
            sorted[dataTemp] = data[rightTemp];
            rightTemp++;
        }
        dataTemp++;
    }

    if (leftTemp > mid) {
        for (int i = rightTemp; i <= high; i++) {
            sorted[dataTemp] = data[i];
            dataTemp++;
        }
    } else {
        for (int i = leftTemp; i <= mid; i++) {
            sorted[dataTemp] = data[i];
            dataTemp++;
        }
    }
    

    for (int i = low; i <= high; i++) {
        data[i] = sorted[i];
    }
}


void merge_sort (int *data, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(data, low, mid);
        merge_sort(data, mid + 1, high);
        merge(data, low, mid, high);
    }
}


int main(void){
    int data[8] = {3, 6, 7, 1, 2, 4, 8, 5};
    merge_sort(data, 0, 7);
    // 결과 확인
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}






