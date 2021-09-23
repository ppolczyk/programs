#include <iostream>

void insertionSort(int a[])
{
        int tmp = 0;
        for(int i=1; i<6; i++)
        {
                while(i>0 && a[i]<a[i-1])
                {
                        tmp = a[i];
                        a[i] = a[i-1];
                        a[i-1] = tmp;
                        i = i - 1;
                }
        }
}

int main()
{
        int arr[6] = {31, 42, 59, 26, 41, 58};
        std::cout << "This program sorts numbers using insertion sort method." << std::endl;
        std::cout << "before sort " << std::endl;
        for(int i=0; i<6; i++)
        {
                std::cout << arr[i] << " ";
        }

        insertionSort(arr);
        std::cout << std::endl << "after sort " << std::endl;
        for(int i=0; i<6; i++)
        {
                std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        return 0;
}