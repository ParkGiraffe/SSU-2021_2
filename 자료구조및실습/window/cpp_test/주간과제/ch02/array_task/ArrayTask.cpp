#include <iostream>

using namespace std;

int main()
{
    unsigned int scores[10] = { 10, 100, 94, 36, 72, 88, 60, 60, 80, 24 };
    unsigned int tot, mean = 0;

    for (int i = 0; i < 10; ++i) {
        tot += scores[i];

    }
    mean = tot / 10;

    cout << " Æò±Õ°ª = " << mean << "\n";

    return 0;
}