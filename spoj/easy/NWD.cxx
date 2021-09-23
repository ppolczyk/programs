#include <iostream>
#include <ctime>

int euklid(int a, int b)
{
  int tmp;
  do
  {
    if(a < b) {std::swap(a,b);};
    a -= b;
  }while(a != b);
  return a;  
}

int main()
{
  int a,b;
  srand(time(NULL));
  a = rand() % 500;
  b = rand() % 600;
  std::cout << "wylosowane liczby to: " << a << " " << b << std::endl;
  std::cout << "NWD = " << euklid(a,b) << std::endl;
  a = 42;
  b = 112;
  std::cout << "NWD = " << euklid(a,b) << std::endl;

  return 0;
}
