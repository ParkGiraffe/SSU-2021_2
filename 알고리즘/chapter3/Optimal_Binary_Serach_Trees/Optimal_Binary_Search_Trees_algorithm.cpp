#include <stdio.h>

typedef struct nodetype* nodePointer;

typedef struct nodeType
{
    int key;
    nodePointer left;
    nodePointer right;
} NODE;

const int MAX = 100;
const int INF = 100000;

int keys[] = { 0, 10, 20, 30, 40 };
int p[] = { 0, 3, 3, 1, 1 };
int A[MAX][MAX];
int R[MAX][MAX];


void opt_serach_tree(int n);
int minimum(int i, int j, int *minK);

int main(void) {
    int n = 4;
    opt_serach_tree(n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
    printf("\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    } 
    return 0;
}


void opt_serach_tree(int n) {
    int i, j, k, diagonal;
    for (int i = 1; i <= n ; i++) {
        A[i][i-1] = 0; // 존재할 수 없는 경우
        A[i][i] = p[i];  // 트리에 Ai 하나만 있는 경우
        R[i][i-1] = 0;
        R[i][i] = i;
    }
    A[n+1][n] = 0;
    R[n+1][n] = 0;
    
    for (diagonal = 1; diagonal <= n - 1; diagonal++) {
        for (i = 1; i <= n - diagonal; i++) {
            j = i + diagonal;
            A[i][j] = minimum(i, j, &k);
            R[i][j] = k;
        }
    }

}

int minimum(int i, int j, int *minK) {
    int k, m, min, probability;
    min = INF;
    // Sigma Pm
    for (k = i; k < j; k++) {
        probability += p[k];
    }
    // k: root
    for (k = i; k < j; k++) {
        m = A[i][k] + A[k+1][j] + probability;
        if (min > m) {
            min = m;
            *minK = k;
        }
    }

    return min;
}
