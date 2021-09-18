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
    cout << "ī���� ���� : " << eCval << endl;
    cout << "ī���� ���� : " << nRval << endl;
    cout << "ī���� �ո� ���� : " << bFaceup << endl;
    cout << "ī���� ���� : " << eSval << endl;
}

void Card::Flip() {
    if (bFaceup == true)
    {
        bFaceup = false;
    } else {
        bFaceup = true;
    }   
}