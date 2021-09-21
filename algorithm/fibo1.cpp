#include <iostream>

int fibo(int n)
{
    int a = 0;      //first element of fibonacci sequence
    int b = 1;      //second element of fibonacci sequence
    int sum = 0;    //sum of all items 
    if (n == 0) 
        return 0;
    if (n == 1)
        return 1;
    for(int i = 2; i <= n; i++)
    {
        sum = b + a;
        a = b;
        b = sum;
    } 
    return sum;
}

int main()
{
    int n;
    std::cout << "Podaj dlugosc ciagu fibonacciego." << std::endl;
    std::cin >> n;
    std::cout << "wartosc wyrazu " << n << " wynosi " <<fibo(n) << std::endl;
    return 0;
}
