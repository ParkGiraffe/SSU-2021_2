#include <iostream>
using namespace std;

// Algorithm for SearchProb2 in words
// 1. x�� ���� �������� ã�� ������ S�� �ִ� ��� �������� ���ʷ� �˻��Ѵ�.
// 2. ���� x�� ���� �������� ã���� S���� ��ġ�� out�ϰ�, S�� ��� �˻��ϰ� ã�� ���ϸ� 0�� out�Ѵ�.

int fseqsearch(int n, int S[], int x);

int main()
{
    int iArray[5] = { 1, 2, 3, 4, 5 };
    
    int x;
    cout << "x�� �Է����ּ���";
    cout << endl;
    cin >> x;

    int result = fseqsearch(5, iArray, x);
    if (result == 0) {
        cout << "�ش��ϴ� ���ڰ� ����Ʈ �ȿ� �������� �ʽ��ϴ�.";
    }
    else
        cout << result << "��° �ε����� �ش� ���ڰ� �ֽ��ϴ�.";
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