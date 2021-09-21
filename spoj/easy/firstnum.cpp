#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

std::string firstNum(int a)
{
    std::string ans;
    
	if(a == 1 || a == 2 || a == 3) {return ans = "TAK";};

    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a%i == 0)
        {
            return ans = "NO";
        }
    }
    return ans = "YES";
} 

int main()
{
    int n;
    int a;
    srand (time(NULL));
    std::cout << "How many random tests do you want to do?" << std::endl;
    std::cin >> n;
    for(int i=0; i < n; i++)
    {
        a = rand();
        std::cout << a << std::endl;
        std::cout << firstNum(a) << std::endl;
    }
   
    return 0;
}
