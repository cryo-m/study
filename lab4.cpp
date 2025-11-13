#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    cout << "Hello GitHub!"
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // завдання 1
    float number;
    cout << "Введіть тризначне число: ";
    cin >> number;
    cout << int(number) % 100 << int(number) / 100 << endl;

    // завдання 2
    float x, y, a, Z, b;
    printf("Введіть значення x, y та Z(у градусах): ");
    scanf_s("%f%f%f", &x, &y, &Z);
    if ((abs(1 + x / 2 + y / 4) > 0.000001) && (abs(x - 1) - pow(abs(y), 1. / 3) >= 0)) {
        a = (sqrt(abs(x - 1) - pow(abs(y), 1. / 3))) / (1 + x / 2 + y / 4);
    }
    else {
        printf("Вираз а невизначений.\n");
    }
    if ((abs(tan(Z * M_PI / 180)) < 10000000000)) {
        b = x * (tan(Z * M_PI / 180) + exp(-(x - 3))) + pow(cos(M_PI), 2);
        printf("b = %f", b);
    }
    else {
        printf("Тангенс %.2f невизначений.", Z);
    }
}
