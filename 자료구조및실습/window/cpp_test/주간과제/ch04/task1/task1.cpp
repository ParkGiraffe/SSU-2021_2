#include <iostream>
using namespace std;

int main() {
    struct Friends {
        char name[20];
        char gender; // m or f
        unsigned int num_of_met[3];
        unsigned int num_of_call[3];
    };

    Friends myFriends[3] = {
        { "park yo sep", 'm', {10, 10, 10}, {10, 10, 10} },
        { "park jo sep", 'f', {10, 1, 10}, {7, 10, 10} },
        { "kim yo sep", 'm', {10, 10, 40}, {10, 90, 5} },
    };

    for (int i = 0; i < 3; i++) {
        cout << "�� ģ���� �̸��� " << myFriends[i].name << "�̰� " << endl;
        cout << "������ " << myFriends[i].gender << "�Դϴ�." << endl;

        cout << "�ֱ� 3�� ���� ";
        for (int j = 0; j < 3; j++) {
            cout << myFriends[i].num_of_met[j] << "�� ";
        }
        cout << "������" << endl;

        cout << "�ֱ� 3�� ���� ";
        for (int j = 0; j < 3; j++) {
            cout << myFriends[i].num_of_call[j] << "�� ";
        }
        cout << "��ȭ�߽��ϴ�." << endl
             << endl;
    }

    return 0;
}