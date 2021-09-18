#pragma once

enum suits { diamond, clover, heart, spade };
enum colors { red, black, blue, pink, yellow, purple, white };

class Card
{
public:
    Card(void); 
    ~Card(void); 

    colors Color(); 
    bool IsFaceUp();
    int Rank(); 
    void SetRank (int x); 
    void Draw(); 
    void Flip(); 

private:
    bool bFaceup; 
    int nRval; 
    suits eSval; 
    colors eCval; 
};


