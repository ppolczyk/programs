#include <iostream>
#include <ctime>

/*W pierwszym wierszu znajduje się liczba t testów (0 < t < 100)
Każdy test opisany jest w następujący sposób. 
W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania. 
Następnie podanych jest n liczb pooddzielanych spacją.*/

int calc(unsigned int a[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    srand(time(NULL));
    int n;
    unsigned int digit[n];
    std::cout << "Enter how many digits you want to add." << std::endl;
    //std::cin >> n;
    for(int i=0; i<n; i++)
    {
        digit[i] = rand()%100;
    
    }
    std::cout << calc(digit, n);

    return 0;
}
