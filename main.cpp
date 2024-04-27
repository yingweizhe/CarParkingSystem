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
        cout << "请选择操作：" << endl;
        cout << "1. 车辆进入" << endl;
        cout << "2. 车辆驶出" << endl;
        cout << "3. 查询空位" << endl;
        cout << "4. 退出" << endl;
        cout << "请选择操作编号（1-4）：" << endl;

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
            cout << "无效的选项，请重新选择" << endl;
            break;
        }
    }

    return 0;
}

void processEntry() {
    string carId;
    cout << "请输入车牌号：" << endl;
    cin >> carId;
    cout << "车辆进入，车牌号为：" << carId << endl;
    // 进行车辆进入操作
}

void processExit() {
    string carId;
    cout << "请输入车牌号：" << endl;
    cin >> carId;
    cout << "车辆驶出，车牌号为：" << carId << endl;
    // 进行车辆驶出操作
}

void checkAvailable() {
    cout << "查询空位" << endl;
    // 进行查询空位操作
}

void exitProgram() {
    cout << "退出程序" << endl;
}