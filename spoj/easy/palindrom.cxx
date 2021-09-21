#include <iostream>
#include <ctime>

/*Wejście

Pierwsza linia wejścia zawiera liczbę t (t <= 80), 
określającą ile liczb znajduje się na kartce Piotrusia.
Każda z następnych t linii zawiera dokładnie jedną liczbę naturalną 
n (1 <= n <= 80), dla której Piotruś musi wykonać obliczenia.
Wyjście

Dla kolejnych liczb podanych na kartce wypisz po jednej linijce 
zawierającej dwie liczby całkowite oddzielone spacją. 
Pierwsza oznacza palindrom otrzymany przez Piotrusia, 
druga -- liczbę dodawań wykonanych, by go otrzymać.*/

int palindrom(int num)
{
    int tmp;
    int reverse{};
    int digit = num;        
    while(digit != 0)
    {
        tmp = digit % 10;
        reverse = reverse * 10 + tmp;
        digit/=10;
    }
    if(num != reverse) 
    {
        num+=reverse;
        return palindrom(num);
    }
    return num;
}

int main()
{
    srand(time(NULL));
    int n = rand() % 10;
    
    for(int i=0; i<n; i++)
    {
        int digit = rand() % 100 + 10;
        std::cout << palindrom(digit) << std::endl;
    }    
    

    return 0;
}
