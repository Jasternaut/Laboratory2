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
    double r;
    std::cin >> r;

    if (r > 0.0 && r < 100.0)
    {
        double answer;
        // вычисление площади круга
        answer = acos(-1) * pow(r,2);
        std::cout << "Answer is: ";
        // вывод ответа с точностью до 10 в -9 степени
        std::cout << std::fixed << std::setprecision(9) << answer << std::endl;
    }
    else
    {
        std::cout << "You should input the radius value between 0 and 100!" << std::endl;
    }

    return 0;
}