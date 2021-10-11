#include <iostream>

// print the sum of positive integer up to n(inclusive)
int main(int argc, char* argv[])
{
    int n = std::atoi(argv[1]);
    int sum = 0;
    while(n > 0)
    {
        sum += n--;
    }
    std::cout << sum << std::endl;
    return 0;
}