#include <iostream>
#include "linear_search.h"

int main()
{
    int array[] = {1, 3, 3, 6, 7, 8, 10};
    const int array_size = sizeof(array) / sizeof(array[0]);
    int x = 7;
    int result[array_size];
    int n = search(array, array_size, x, result); 
    std::cout << n << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << result[i] << " ";
    }
    return 0;
} 