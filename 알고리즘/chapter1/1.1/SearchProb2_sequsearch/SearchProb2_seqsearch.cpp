#include <iostream>
using namespace std;

// Algorithm for SearchProb2 in words
// 1. x�� ���� �������� ã�� ������ S�� �ִ� ��� �������� ���ʷ� �˻��Ѵ�.
// 2. ���� x�� ���� �������� ã���� S���� ��ġ�� out�ϰ�, S�� ��� �˻��ϰ� ã�� ���ϸ� 0�� out�Ѵ�.

void seqsearch(int n, int S[], int x, int& location);

int main()
{
    int iArray[5] = { 1, 2, 3, 4, 5 };
    int location = 0;

    int x;
    cout << "x�� �Է����ּ���";
    cout << endl;
    cin >> x;

    seqsearch(5, iArray, x, location);
    if (location == -1) {
        cout << "�ش��ϴ� ���ڰ� ����Ʈ �ȿ� �������� �ʽ��ϴ�.";
    }
    else
        cout << location + 1 << "��° �ε����� �ش� ���ڰ� �ֽ��ϴ�.";

    return 0;
}




void seqsearch(int n, int S[], int x, int& location)
{
    while (location < n && S[location] != x)
        location++;
    if (location >= n)
        location = -1;
    

}