#include <stdio.h>


const int MAX = 100;
int d[MAX] = {5, 2, 6, 10, 5, 7, 8 };
int M[MAX][MAX];
int P[MAX][MAX];
int INF = 1000000;

int minimum(int i, int j, int *minK);
int minmult(int n);
void order(int i, int j);


int main(void) {

    minmult(6);
    order(1, 5);
    return 0;
}



int minmult(int n) {
    int i, j, k, diagonal;
    
    // 자기자신 하나만 가질 경우는 0 <== diagonal이 0인 경우
    for (i = 0; i <= n; i++) {
        M[i][i] = 0;
    }

    for (diagonal = 1; diagonal <= n - 1; diagonal++) {
        for (i = 1; i <= n - diagonal; i++) {
            j = i + diagonal;

                M[i][j] = minimum(i, j, &k);
                P[i][j] = k;
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    } 

}

int minimum(int i, int j, int *minK) {
    int k, m, min;
    min = INF;
    for (k = i; k < j; k++) {
        m = M[i][k] + M[k+1][j] + d[i-1] * d[k] * d[j];
        if (min > m) {
            min = m;
            *minK = k;
        }
    }

    return min;
}


void order(int i, int j) {
    int k;
    if (i == j)
        printf("A%d", i);  // Ai
    else {
        k = P[i][j];
        printf("(");
        order(i, k); // (Ai to Ak)
        order(k+1, j); // (Ak+1 to Aj)
        printf(")");
    }
}
