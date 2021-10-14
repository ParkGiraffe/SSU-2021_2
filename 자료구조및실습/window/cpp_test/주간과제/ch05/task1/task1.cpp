#include <iostream>
using namespace std;

struct Order {
    char name [20]; // 주문자 이름
    char type [20]; // 신발 종류
    int size; // 신발 크기
};

void send(Order *order) {
    if (order != nullptr && order -> size != 0) {
        cout    << "주문해주셔서 감사합니다." << endl;
        cout    << "주문하신 " << order->name << " 고객님의 " << order->type << " 신발(사이즈 " << order->size << ")이 주문 완료되었습니다.";
    }
}

int main() {
    // Order order = {}
    int stop = 1;

    while (stop == 1) {

    Order* order = new Order;

    cout    << "고객님 안녕하세요." << endl;
    cout    << "XYZ 마트입니다." << endl;

    cout    << "신발을 주문하시려면 주문자 이름을 입력 후 엔터를 입력해주세요" << endl;
    cin     >> order->name;
    cout    << "신발의 종류를 입력 후 엔터를 입력해주세요." << endl;
    cin     >> order->type;
    cout    << "신발의 사이즈를 입력 후 엔터를 입력해주세요." << endl;
    cin     >> order->size;
    cout    << endl;

    send(order);
    
    cout    << endl;
    cout    << "더 주문을 하시겠습니까?  (네: 1, 아니오: 0)" << endl;
    cin     >> stop;
    }

    cout     << "주문 시스템이 종료되엇습니다" << endl;
}