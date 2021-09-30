#include <iostream>
using namespace std;

int main() {
    long lArray[20] = {0}; 

    long (*p)[20] = &lArray;

    for (int i = 0; i < 20; ++i) {
        
        //*(lArray + i) = 0;
        cout << "*lArray[" << i << "] = " << lArray[i] << endl;

        (*p)[i] = i;
        cout << "*p[" << i << "] = " << (*p)[i] << endl;
    }


    return 0;
}