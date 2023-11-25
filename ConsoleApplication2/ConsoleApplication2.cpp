#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані сторони трикутника
    double a, b, c;

    // Введення значень сторін трикутника
    std::cout << "Введіть сторону a: ";
    std::cin >> a;

    std::cout << "Введіть сторону b: ";
    std::cin >> b;

    std::cout << "Введіть сторону c: ";
    std::cin >> c;

    // Обчислення висоти та бісектриси
    double height = sqrt(pow(a, 2) - pow(c / 2, 2));
    double bisector = (2 / (a + b)) * sqrt(a * b * pow((a + b - c) * (a + b + c), 2));

    // Підняття до ступеня a та c
    double heightPowerA = pow(height, a);
    double bisectorPowerC = pow(bisector, c);

    // Вивід результатів
    std::cout << "Висота в ступені " << a << ": " << heightPowerA << std::endl;
    std::cout << "Бісектриса в ступені " << c << ": " << bisectorPowerC << std::endl;

}