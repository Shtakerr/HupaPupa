#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані значення b та c
    double b = 3;
    double c = 1.7;

    // Обчислення a = sin^5(b)
    double a = std::pow(std::sin(b), 5);

    // Обчислення x = a + c^3
    double x = a + std::pow(c, 3);

    // Обчислення y = e^√(|x|) + cos(x)
    double y = std::exp(std::sqrt(std::abs(x))) + std::cos(x);

    // Вивід результатів
    std::cout << "a = " << a << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}