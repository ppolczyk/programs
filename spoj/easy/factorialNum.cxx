#include <cassert>
#include <iostream>
#include <string>

void factorial(unsigned int a)
{
    unsigned int fac = 1;
    if(a == 1){
        std::cout << "0 1" << std::endl;
    }
    else
    {
        for(int i=2; i<=a; i++)
        {
            fac *= i;
        }
    
        fac = fac%100;
        std::cout << fac/10 << ' ' << fac%10 << std::endl;
    }
}


void runTests()
{
    //assert(factorial(1) == "0 1");
    //assert(factorial(2) == "0 2");
    //assert(factorial(24) == "2 4");
    //assert(factorial(120) == "2 0");
}

int main()
{
    //runTests();
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    return 0;
}
