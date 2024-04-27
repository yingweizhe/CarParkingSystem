#include <iostream>
#include "Car.h"
#include "CarPark.h"
using namespace std;

void processEntry();
void processExit();
void checkAvailable();
void exitProgram();

int main() {
    int choice;

    while (true) {
        cout << "��ѡ�������" << endl;
        cout << "1. ��������" << endl;
        cout << "2. ����ʻ��" << endl;
        cout << "3. ��ѯ��λ" << endl;
        cout << "4. �˳�" << endl;
        cout << "��ѡ�������ţ�1-4����" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            processEntry();
            break;
        case 2:
            processExit();
            break;
        case 3:
            checkAvailable();
            break;
        case 4:
            exitProgram();
            return 0;
        default:
            cout << "��Ч��ѡ�������ѡ��" << endl;
            break;
        }
    }

    return 0;
}

void processEntry() {
    string carId;
    cout << "�����복�ƺţ�" << endl;
    cin >> carId;
    cout << "�������룬���ƺ�Ϊ��" << carId << endl;
    // ���г����������
}

void processExit() {
    string carId;
    cout << "�����복�ƺţ�" << endl;
    cin >> carId;
    cout << "����ʻ�������ƺ�Ϊ��" << carId << endl;
    // ���г���ʻ������
}

void checkAvailable() {
    cout << "��ѯ��λ" << endl;
    // ���в�ѯ��λ����
}

void exitProgram() {
    cout << "�˳�����" << endl;
}