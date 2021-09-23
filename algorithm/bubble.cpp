#include <iostream>


void bubbleSort(int a[], int n)
{  
    int tmp = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    int a[] = {31, 42, 59, 26, 41, 58};
    int n = std::extent<decltype(a)>::value;        //number of elements in our array

    std::cout << "This program sorts numbers using bubble sort method." << std::endl;
    std::cout << "before sort ";
    for(int i=0; i<n ; i++)
    {
        std::cout << a[i];
        if(i < n-1) 
        std::cout << ",";
    }

    bubbleSort(a, n);
    std::cout << std::endl << "after sort ";
    for(int i=0; i<n ; i++)
    {
        std::cout << a[i];
        if(i < n-1) 
        std::cout << ",";
    }
    std::cout << std::endl;

    return 0;
}