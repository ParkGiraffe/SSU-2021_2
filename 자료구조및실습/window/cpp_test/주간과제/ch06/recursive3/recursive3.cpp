#include <iostream>
using namespace std;

void Reverse(char S[], int First, int Last) {
    if (First > Last) 
        return;
    else {
        // printf("%c", S[First]); => REVERSE�� ��µ�.
        Reverse(S, First + 1, Last);
        printf("%c", S[First]);  // => ESREVER�� ��µ�.
    }
}

int main() {
    char arrChar[] = "REVERSE";
    Reverse(arrChar, 0, 7);

    cout << endl;

    return 0;
}
