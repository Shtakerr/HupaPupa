#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Задані значення y та k
    double y, k;-

    // Введення значення y
    std::cout << "Введіть значення y: ";
    std::cin >> y;

    // Введення значення k
    std::cout << "Введіть значення k: ";
    std::cin >> k;

    // Обчислення виразу
    double result = std::sqrt(std::pow(std::sin(y), 2) + 6.835) / (std::log(y + k) + 3 * std::pow(y, 2));

    // Вивід результату
    std::cout << "Результат: " << result << std::endl;

    return 0;
}