// Variant 1 from task 3
#include <iostream>
#include <cmath>
#include <stdexcept>


// Functions for Excercise 1
void ex1HelpFunction(double x)
{
    try
    {
        if (x == -1)
        {
            throw std::runtime_error("Error: deviding by zero");
        }
        std::cout << 1 / std::pow((1 + x), 2);
    }
    catch (std::runtime_error error)
    {
        std::cout << error.what();
    }
}

void ex1()
{
    double a, b, h;
    std::cout << "Input start point a: ";
    std::cin >> a;
    std::cout << "Input end point b: ";
    std::cin >> b;
    std::cout << "Input step h: ";
    std::cin >> h;

    std::cout << "x\tf(x)" << std::endl;

    for (double i = a; i <= b; i += h)
    {
        std::cout << i << "\t";
        ex1HelpFunction(i);
        std::cout << std::endl;
    }
}

int main()
{
    // Exercise 1.
    ex1();

    return 0;
}
