#include <iostream>
#include <stdio.h>

using namespace std;

int location (int low, int high, int x, int S[]);

int main() {
    int n = 10;
    int S[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int x ;

    cout << "ã���� �ϴ� ���ڸ� �Է��ϼ���" << endl;
    cin >> x;

    int locationout = location(0, n-1, x, S);

    cout << endl;
    cout << "�ش� ������ ��ġ�� " << locationout + 1 << "�Դϴ�." << endl;

    return 0;
}


int location (int low, int high, int x, int S[]) {
    int mid;
    
    if (low > high)
        return -1;
    else {
        mid = (low + high) / 2;

        if (x == S[mid]) 
            return mid;
        else if(x < S[mid])
            return location(low, mid - 1, x, S);
        else
            return location(mid + 1, high, x, S);
    }
}