#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;


bool isLeap(int y) {
    if (y % 4 == 0) return true;
    else return false;
}


void zadanie1() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int d1, m1, y1, d2, m2, y2;
    cout << "1. 2 даты (день месяц год):" << endl;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    int days1 = 0, days2 = 0;

    
    for (int i = 1; i < y1; i++) {
        if (isLeap(i)) days1 += 366;
        else days1 += 365;
    }
    int mes[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (isLeap(y1)) mes[2] = 29;
    for (int i = 1; i < m1; i++) days1 += mes[i];
    days1 += d1;

    
    for (int i = 1; i < y2; i++) {
        if (isLeap(i)) days2 += 366;
        else days2 += 365;
    }
    if (isLeap(y2)) mes[2] = 29;
    else mes[2] = 28;
    for (int i = 1; i < m2; i++) days2 += mes[i];
    days2 += d2;

    cout << "разница: " << abs(days2 - days1) << " дней" << endl;
}


void zadanie2() {
    int n, sum = 0;
    cout << "\n 2. размер массива: ";
    cin >> n;
    int a[100];
    cout << "элемент: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "итог: " << (double)sum / n << endl;
}


void zadanie3() {
    int n, p = 0, o = 0, z = 0;
    cout << "\n3. размер массива: ";
    cin >> n;
    int a[100];
    cout << "элемент: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) p++;
        if (a[i] < 0) o++;
        if (a[i] == 0) z++;
    }
    cout << "полож: " << p << endl;
    cout << "отриц: " << o << endl;
    cout << "нулей: " << z << endl;
}

int main() {
    zadanie1();
    zadanie2();
    zadanie3();
    return 0;
}