#include <iostream>

using namespace std;

int main()
{
    //int Ÿ���� �迭 ����
    int kor_scores[5];

    //������ ���� �־��.
    kor_scores[0] = 100;
    kor_scores[1] = 320;
    kor_scores[2] = 140;
    kor_scores[3] = 530;
    kor_scores[4] = 70;

    //�� ������ ���� ����Ѵ�.
    for (int i = 0; i < 5; ++i) {
        cout << i << " ��° ���� = " << kor_scores[i] << "\n";
    }

    return 0;
}