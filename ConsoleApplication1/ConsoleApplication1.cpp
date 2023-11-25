#include <cmath>
#include <Windows.h>
#include <iostream>

class PhoneCall {
public:
    PhoneCall(double costPerMinute, int duration) {
        this->costPerMinute = costPerMinute;
        this->duration = duration;
    }

    double calculateCost() const {
        return costPerMinute * duration;
    }

private:
    double costPerMinute;
    int duration;
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // Вартість за хвилину у копійках
    double costPerMinute = 5.0;

    // Тривалість розмови в хвилинах
    int duration = 10;

    // Кількість розмов
    int numCalls = 3;

    // Створення об'єкта класу PhoneCall
    PhoneCall call(costPerMinute, duration);

    // Обчислення вартості однієї розмови
    double individualCost = call.calculateCost();

    // Обчислення загальної вартості за всі розмови
    double totalAmount = numCalls * individualCost;

    // Вивід результатів
    std::cout << "Вартість однієї розмови: " << individualCost << " копійок" << std::endl;
    std::cout << "Загальна сума за всі розмови: " << totalAmount << " копійок" << std::endl;

    // Початкова ціна товару
    double initialPrice = 100.0;

    // Знижка на товар у відсотках
    double discountPercentage = 10.0;

    // Підвищення ціни товару у відсотках
    double increasePercentage = 15.0;

    // Розрахунок ціни після знижки
    double discountedPrice = initialPrice - (initialPrice * (discountPercentage / 100.0));

    // Розрахунок ціни після підвищення
    double finalPrice = discountedPrice + (discountedPrice * (increasePercentage / 100.0));

    // Вивід результатів
    std::cout << "Початкова ціна: " << initialPrice << std::endl;
    std::cout << "Ціна після знижки: " << discountedPrice << std::endl;
    std::cout << "Ціна після підвищення: " << finalPrice << std::endl;

}
