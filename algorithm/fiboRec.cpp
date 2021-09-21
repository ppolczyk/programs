#include <iostream>

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n > 1)
        return fibo(n - 1) + fibo(n - 2); 
}


int main()
{
    int n;
    std::cout << "Podaj wyraz ciagu fibonacciego." << std::endl;
    std::cin >> n;
    std::cout << fibo(n) << std::endl;
    return 0;
}
