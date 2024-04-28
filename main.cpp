#include <iostream>
#include "Car.h"
#include "CarPark.h"
using namespace std;

void processEntry();
void processExit();
void checkAvailable();
void exitProgram();

extern CarPark parkA(256);

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
    Car car(carId);
    parkA.carEntry(car);
}

void processExit() {
    string carId;
    cout << "�����복�ƺţ�" << endl;
    cin >> carId;
    cout << "����ʻ�������ƺ�Ϊ��" << carId << endl;
    // ���г���ʻ������
    Car car(carId);
    parkA.carExiting(car);
}

void checkAvailable() {
    cout << "��ѯ��λ" << endl;
    // ���в�ѯ��λ����
    cout << "ʣ���λ" << parkA.getRemainParkingSpace() << endl;
}

void exitProgram() {
    cout << "�˳�����" << endl;
}