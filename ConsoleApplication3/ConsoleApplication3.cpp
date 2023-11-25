#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include   <Windows.h>
#include <cmath>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Введение угла alpha в радианах
    double alpha;
    std::cout << "Введите значение угла alpha в радианах: ";
    std::cin >> alpha;

    // Вычисление z1
    double z1_numerator = sin(4 * alpha);
    double z1_denominator = (1 + cos(4 * alpha)) * cos(2 * alpha) / (1 + cos(2 * alpha));
    double z1 = z1_numerator / z1_denominator;

    // Вычисление z2
    double z2 = 1 / tan(3.0 / 2.0 * M_PI - alpha);

    // Вывод результатов
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    return 0;
}