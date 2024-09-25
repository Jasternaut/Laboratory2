#include <iostream>
#include <cmath>
#include <iomanip>
// лабораторная работа 2. Арифметические операции
/*
Написать программу, которая получает на вход вещественное число R (0 < R < 100) – 
радиус круга. И рассчитывает площадь круга с точностью до 10^-9.
*/
int main()
{
    std::cout << "Input radius: ";
    // получение значения радиуса
    int r;
    std::cin >> r;

    if (r > 0 && r < 100)
    {
        double answer;
        // вычисление площади круга
        answer = 3.14 * sqrt(r);
        std::cout << "Answer is: ";
        // вывод ответа с точностью до 10 в -9 степени
        std::cout << std::fixed << std::setprecision(9) << answer << std::endl;
    }

    return 0;
}