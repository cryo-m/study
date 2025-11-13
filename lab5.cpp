#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int sum = 0;
    int mult = 1;
    float Y, Z, x, y;
    cout << "Введіть значення x та y: ";
    cin >> x >> y;
    for (int n = 1; n <= 5; n++) {
        sum += cos(n);
    }
    Y = (tan(x * x) + sum) / (x + 5);
    for (int k = 1; k <= 10; k++) {
        mult *= log(k * y);
    }
    Z = mult + y * y;
    printf("Y = %f\nZ = %f\n", Y, Z);
}
