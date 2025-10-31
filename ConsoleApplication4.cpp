#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

double calculate_A(double x, double y, double a) {
    if (abs(pow(1. / 2 + pow(sin(y), 2), 3)) > 0.00001) {
        return (2 * sin(x - M_PI / 6)) / (pow(1. / 2 + pow(sin(y), 2), 3)) + cos(a + 15 * 180 / M_PI);
    }
}

double calculate_B(double x, double y, double z) {
    if (abs(pow(1 + z * z + x * x, 3)) > 0.00001 && abs(x + 3 * y) > 0.00001) {
        return (pow(abs(z - 8 * y), 4)) / (pow(1 + z * z + x * x, 3)) + pow(x * x - 9 * y * y * y / abs(x + 3 * y), 1. / 5);
    }
}

int func(double b) {
    return ceil(b);
}

int extremely_cool_function() {
    cout << "This func is very cool and useful";
}

int main()
{
    SetConsoleOutputCP(1251);
    double x, y, a, z;
    cout << "Введіть значення x, y, a, z: ";
    cin >> x >> y >> a >> z;
    double A = calculate_A(x, y, a);
    double B = calculate_B(x, y, z);
    cout << "\nA = " << A << "\nB = " << B << endl;
    cout << "Найменше ціле число, що більше за В: " << func(B) << endl;
}
