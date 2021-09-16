#pragma once

enum suits { diamond, clover, heart, spade };
enum colors { red, black, blue, pink, yellow, purple, white };

class Card
{
public:
    Card(void); //생성자
    ~Card(void); //소멸자

    colors Color(); // 현재의 카드의 색상을 반환
    bool IsFaceUp(); // 앞 면이 위인지 아래인지 반환
    int Rank(); // 카드의 숫자를 반환
    void SetRank (int x); // 카드의 숫자를 x로 설정
    void Draw(); // 카드를 콘솔에 출력
    void Flip(); // 카드를 뒤집는 함수

private:
    bool bFaceup; // 그림이 위로 향하고 있는지 여부를 저장
    int nRval; // 카드 숫자를 저장
    suits eSval; // 카드 종류를 저장
    colors eCval; // 카드의 색상을 저장
};


