#include "Card.h"
#include <iostream>
using namespace std;


Card::Card(void)
{
    eSval = diamond;
    nRval = 7;
    bFaceup = true;
    eCval = pink;
}

Card::~Card(void) {}

colors Card::Color() {
    return eCval;
}

bool Card::IsFaceUp() {
    return bFaceup;
}

int Card::Rank() {
    return nRval;
}

void Card::SetRank(int x) {
    nRval = x;
}

void Card::Draw() {
    cout << "카드의 색상 : " << eCval << endl;
    cout << "카드의 숫자 : " << nRval << endl;
    cout << "카드의 뒤집힘여부 : " << bFaceup << endl;
    cout << "카드의 종류 : " << eSval << endl;
}

void Card::Flip() {
    if (bFaceup == true)
    {
        bFaceup = false;
    } else {
        bFaceup = true;
    }   
}