#include <iostream>
using namespace std;

struct Order {
    char name [20]; // �ֹ��� �̸�
    char type [20]; // �Ź� ����
    int size; // �Ź� ũ��
};

void send(Order *order) {
    if (order != nullptr && order -> size != 0) {
        cout    << "�ֹ����ּż� �����մϴ�." << endl;
        cout    << "�ֹ��Ͻ� " << order->name << " ������ " << order->type << " �Ź�(������ " << order->size << ")�� �ֹ� �Ϸ�Ǿ����ϴ�.";
    }
}

int main() {
    // Order order = {}
    int stop = 1;

    while (stop == 1) {

    Order* order = new Order;

    cout    << "���� �ȳ��ϼ���." << endl;
    cout    << "XYZ ��Ʈ�Դϴ�." << endl;

    cout    << "�Ź��� �ֹ��Ͻ÷��� �ֹ��� �̸��� �Է� �� ���͸� �Է����ּ���" << endl;
    cin     >> order->name;
    cout    << "�Ź��� ������ �Է� �� ���͸� �Է����ּ���." << endl;
    cin     >> order->type;
    cout    << "�Ź��� ����� �Է� �� ���͸� �Է����ּ���." << endl;
    cin     >> order->size;
    cout    << endl;

    send(order);
    
    cout    << endl;
    cout    << "�� �ֹ��� �Ͻðڽ��ϱ�?  (��: 1, �ƴϿ�: 0)" << endl;
    cin     >> stop;
    }

    cout     << "�ֹ� �ý����� ����Ǿ����ϴ�" << endl;
}