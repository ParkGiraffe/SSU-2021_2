#include <iostream>
using namespace std;

// Algorithm for SearchProb2 in words
// 1. x와 같은 아이템을 찾을 때까지 S에 있는 모든 아이템을 차례로 검사한다.
// 2. 만일 x와 같은 아이템을 찾으면 S상의 위치를 out하고, S를 모두 검사하고도 찾지 못하면 0을 out한다.

void seqsearch(int n, int S[], int x, int& location);

int main()
{
    int iArray[5] = { 1, 2, 3, 4, 5 };
    int location = 0;

    int x;
    cout << "x를 입력해주세요";
    cout << endl;
    cin >> x;

    seqsearch(5, iArray, x, location);
    if (location == -1) {
        cout << "해당하는 숫자가 리스트 안에 존재하지 않습니다.";
    }
    else
        cout << location + 1 << "번째 인덱스에 해당 숫자가 있습니다.";

    return 0;
}




void seqsearch(int n, int S[], int x, int& location)
{
    while (location < n && S[location] != x)
        location++;
    if (location >= n)
        location = -1;
    

}