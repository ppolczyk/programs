#include <iostream>

int arrCreator(int n)
{
    vector <int> tab;
    for(int i = 0; i < n; i++)
    {
        std::cout << "Podaj " << i + 1 << " element tabalicy." << std::endl;
        std::cin >> tab.push_back(i);
    }

    return a[];
}

int main()
{
    int n;
    std::cout << "Podaj wielkosc tablicy." << std::endl;
    std::cin >> n;
    std::cout << arrCreator(n) << std::endl;
    


    return 0;
}

