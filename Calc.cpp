#include <iostream>

void calcu() {
    std::cout << "1. Отношение\n2. Произведение\n3. Сумма\n4. Вычитание" << std::endl;
    int rav;
    std::cout << "Выберите действие(запишите просто номер): ";
    std::cin >> rav;
    try {
        int ch1, ch2;
        std::cout << "Введите числа, с которыми вы хотите провести действия в одну строку через пробел (пример: 12 35): ";
        std::cin >> ch1 >> ch2;
        if (rav == 1) {
            try {
                std::cout << ch1 / ch2 << std::endl;
            }
            catch (std::exception& e) {
                std::cout << "Делит на ноль нельзя!" << std::endl;
                calcu();
            }
        }
        else if (rav == 2) {
            std::cout << ch1 * ch2 << std::endl;
        }
        else if (rav == 3) {
            std::cout << ch1 + ch2 << std::endl;
        }
        else if (rav == 4) {
            std::cout << ch1 - ch2 << std::endl;
        }
    }
    catch (std::exception& e) {
        std::cout << "Введите два числа!" << std::endl;
        calcu();
    }
}

void squer() {
    std::cout << "1. Рассчитать площадь прямоугольника" << std::endl;
    std::cout << "2. Рассчитать площадь треугольника" << std::endl;
    std::cout << "3. Рассчитать объем параллелепипеда" << std::endl;
    int rav;
    std::cout << "Выберите действие(запишите просто номер): ";
    std::cin >> rav;
    if (rav == 1) {
        try {
            int ch1, ch2;
            std::cout << "Введите две стороны, с которыми вы хотите провести действия в одну строку через пробел (пример: 12 35): ";
            std::cin >> ch1 >> ch2;
            std::cout << ch1 * ch2 << std::endl;
        }
        catch (std::exception& e) {
            std::cout << "Введите два числа!" << std::endl;
            squer();
        }
    }
    else if (rav == 2) {
        try {
            int ch1, ch2;
            std::cout << "Введите сторону и высоту, с которыми вы хотите провести действия в одну строку через пробел (пример: 12 35): ";
            std::cin >> ch1 >> ch2;
            std::cout << ch1 * 0.5 * ch2 << std::endl;
        }
        catch (std::exception& e) {
            std::cout << "Введите два числа!" << std::endl;
            squer();
        }
    }
    else if (rav == 3) {
        try {
            int ch1, ch2, ch3;
            std::cout << "Введите три стороны, с которыми вы хотите провести действия в одну строку через пробел (пример: 12 35): ";
            std::cin >> ch1 >> ch2 >> ch3;
            std::cout << ch1 * ch2 * ch3 << std::endl;
        }
        catch (std::exception& e) {
            std::cout << "Введите три числа!" << std::endl;
            squer();
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    while (true) {
        int var;
        std::cout << "1. Обычные вычисления\n2. Вычисление площади\n3. Выйти\nВыберите действие(запишите просто номер): ";
        std::cin >> var;
        if (var == 1) {
            calcu();
        }
        else if (var == 2) {
            squer();
        }
        else if (var == 3) {
            break;
        }
    }
    return 0;
}

