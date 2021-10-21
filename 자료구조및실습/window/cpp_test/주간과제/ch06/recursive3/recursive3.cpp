#include <iostream>
using namespace std;

void Reverse(char S[], int First, int Last) {
    if (First > Last) 
        return;
    else {
        // printf("%c", S[First]); => REVERSE·Î Ãâ·ÂµÊ.
        Reverse(S, First + 1, Last);
        printf("%c", S[First]);  // => ESREVER·Î Ãâ·ÂµÊ.
    }
}

int main() {
    char arrChar[] = "REVERSE";
    Reverse(arrChar, 0, 7);

    cout << endl;

    return 0;
}
