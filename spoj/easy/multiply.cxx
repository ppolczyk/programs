#include <cassert>
#include <iostream>
#include <string>

int multiply(int a, int b)
{
    int digit; 
    int multi = 1;

    for(int i = 0; i < b; i++)
    {
        multi *= a;
    }
    digit = multi%10;
    return digit;
}

void runTests()
{
    assert(multiply(2, 3) == 8);
    assert(multiply(3, 3) == 7);
    assert(multiply(4, 3) == 4);
    assert(multiply(5, 3) == 5);

}

int main()
{
    runTests();
    
    return 0;
}
