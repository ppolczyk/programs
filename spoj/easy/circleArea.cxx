//wyznacz pole kola bedacego wycinkiem dwoch identycznych sfer

#include <iostream>
#include <cmath>
#include <iomanip>
double area(int r, int d)
{
  double p;
  double pi = 3.141592654;
  p = (pow(r, 2) - pow(d,2)/4) * pi;
  return p;
}


int main()
{
  std::cout << std::setprecision(2) << std::fixed << area(10, 10) << std::endl;
  std::cout << std::setprecision(2) << std::fixed << area(1000, 1500) << std::endl;
  return 0;
}
