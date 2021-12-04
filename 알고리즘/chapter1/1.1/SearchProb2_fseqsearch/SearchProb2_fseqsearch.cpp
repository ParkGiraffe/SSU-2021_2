#include <iostream>
using namespace std;

// Algorithm for SearchProb2 in words
// 1. x와 같은 아이템을 찾을 때까지 S에 있는 모든 아이템을 차례로 검사한다.
// 2. 만일 x와 같은 아이템을 찾으면 S상의 위치를 out하고, S를 모두 검사하고도 찾지 못하면 0을 out한다.

int fseqsearch(int n, int S[], int x);

int main()
{
    int iArray[5] = { 1, 2, 3, 4, 5 };
    
    int x;
    cout << "x를 입력해주세요";
    cout << endl;
    cin >> x;

    int result = fseqsearch(5, iArray, x);
    if (result == 0) {
        cout << "해당하는 숫자가 리스트 안에 존재하지 않습니다.";
    }
    else
        cout << result << "번째 인덱스에 해당 숫자가 있습니다.";
}




int fseqsearch(int n, int S[], int x)
{
    int location = 0;
    while (location < n) {
        if (S[location] == x)
            break;
        location++;
    }

    if (location >= n)
        location = -1;
    return location + 1;

}