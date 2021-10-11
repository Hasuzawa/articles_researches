#include <iostream>

// print the sum of positive integer up to n(inclusive)
int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int sum{ 0 };
    while(n > 0)
    {
        sum += n--;
    }
    std::cout << sum << std::endl;
    return 0;
}