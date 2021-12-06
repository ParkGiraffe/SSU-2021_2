#include <iostream>
#include "GraphByMatrix.h"

using namespace std;

int main(void) {
    GraphByMatrix G1;

    for (int i = 0; i < 4; i++) {
        G1.insertVertex(i);
    }

    G1.insertEdge(0, 1);
    G1.insertEdge(0, 3);
    G1.insertEdge(1, 2);
    G1.insertEdge(1, 3);
    G1.insertEdge(2, 3);

    cout << endl
         << "�׷��� G1�� ������� : ";
    G1.printGraph();

    cout << endl;
    
    return 0;
}