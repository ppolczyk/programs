#include <iostream>
#include <string>
#include <sstream>

/*
Flamaster
Kasia niedawno poznała wszystkie literki w szkole. Z wielką pasją potrafiła całe dnie spędzać na pisaniu długich słów swoim ulubionym flamastrem. Pisała i pisała "tasiemce" tak długo, aż flamaster wypisał się. Kasia posmutniała. Z trudem, ale udało jej się uprosić swoją mamę, aby kupiła jej nowy pisak. Musiała jednak obiecać, że tym razem będzie bardziej oszczędna przy jego używaniu żeby wystarczył na dłużej. Kasia zaczęła zastanawiać się w jaki sposób będzie mogła zrealizować obietnicę daną mamie.

Postanowiła, że aby zaoszczędzić wkład flamastra będzie wypisywała skróconą wersję wymyślanych wyrazów. Jeśli miała zamiar napisać więcej niż dwie takie same literki obok siebie w wyrazie, to teraz napisze literkę a następnie liczbę, określającą ilość wystąpień tej literki.
Zadanie
Twoim zadaniem jest dla zadanego wyrazu, który wymyśliła Kasia, podanie skróconej wersji tego wyrazu.
Wejście
W pierwszej linijce wejścia znajduje się liczba naturalna C, 1 ≤ C ≤ 50, oznaczająca ilość zestawów danych. W kolejnych C wierszach wejścia znajdują się zestawy danych. Każdy zestaw składa się z niepustego wyrazu złożonego z samych dużych liter alfabetu amerykańskiego. Długość wyrazu nie przekracza 200 znaków.
Wyjście
Dla każdego zestawu danych, dla zadanego wyrazu, na wyjściu powinna znaleźć się jego skrócona wersja.
Przykład
Dla danych wejściowych:

4
OPSS
ABCDEF
ABBCCCDDDDEEEEEFGGHIIJKKKL
AAAAAAAAAABBBBBBBBBBBBBBBB

prawidłowym rozwiązaniem jest:

OPSS
ABCDEF
ABBC3D4E5FGGHIIJK3L
A10B16
*/

void word(std::string& word)
{
    int counter = 0;
    for(int i=0; i<=word.length()-1; i++)
    {
        if(word[i] == word[i+1] && i != word.length() - 1)
        {
            counter++; 
        }
        else
        {
            if(counter > 1)
            {
                std::stringstream tmp;
                tmp << counter + 1;
                std::string num = tmp.str(); //int to str
                
                word.erase(i - counter + 1, counter);
                i = i - counter + 1;
                word.insert(i, num);               
            }   
            counter = 0;
        }
        
    }
    std::cout<< word << std::endl;
}

int main()
{
    std::string words[] = {"OPSS", "ABCDEF", "ABBCCCDDDDEEEEEFGGHIIJKKKL", "AAAAAAAAAABBBBBBBBBBBBBBBB"};
    
	for(int i=0; i<4; i++)
    {
        word(words[i]);
    }

    return 0;
}
