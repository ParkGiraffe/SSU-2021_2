#include <iostream>

using namespace std;

int main()
{
    //int 타입의 배열 정의
    int kor_scores[5];

    //임의의 값을 넣어본다.
    kor_scores[0] = 100;
    kor_scores[1] = 320;
    kor_scores[2] = 140;
    kor_scores[3] = 530;
    kor_scores[4] = 70;

    //각 원소의 값을 출력한다.
    for (int i = 0; i < 5; ++i) {
        cout << i << " 번째 원소 = " << kor_scores[i] << "\n";
    }

    return 0;
}