// Variant 11

#include <iostream>

// Functions for excercise 1
double ex1Calc(double x, int n, int i = 1)
{
    if (i == n)
    {
        return x / (n + x);
    }
    return x / (i + ex1Calc(x, n, i + 1));
}


void ex1()
{
    double x;
    std::cout << "Input x: ";
    std::cin >> x;

    int n;
    std::cout << "Input n: ";
    std::cin >> n;

    double result = ex1Calc(x, n);

    std::cout << "Result :" << result << std::endl;
}

// Function for excercise 2


int main()
{
    // Excercise 1
    ex1();

    // Excercise 2
    // ex2();

    return 0;
}