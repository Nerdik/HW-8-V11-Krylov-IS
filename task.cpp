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

// Functions for excercise 2
void ex2Recursion(int n, int k = 0)
{
    if (k == n)
    {
        return;
    }

    for (int i = 0; i <= k; ++i)
    {
        std::cout << " ";
    }
    for (int i = 0; i < n - k; ++i)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
    ex2Recursion(n, k + 1);
}


void ex2()
{
    int n;
    std::cout << "Input n (even): ";
    std::cin >> n;

    if (n % 2 == 0)
    {
        ex2Recursion(n);
    }
    else
    {
        std::cout << "Error: n is not even" << std::endl;
    }
}


int main()
{
    // Excercise 1
    ex1();

    // Excercise 2
    ex2();

    return 0;
}