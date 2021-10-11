#include <iostream>
#include <stdexcept>

// return the n-th fibonacci number, starts from 0
// e.g. 0 1 1 2 3 5 8 13 ...
// then fibonacci(6) is 8
int fibonacci(int n)
{
    if (n < 0)
    {
        throw std::invalid_argument("negative n is not allowed, n: " + std::to_string(n));
    }
    if (n == 0) {return 0;}
    else if (n == 1) {return 1;}
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = 0;
    result = fibonacci(n);
    std::cout << result << std::endl;
    return 0;
}