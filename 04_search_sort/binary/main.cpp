#include <iostream>
#include "binary_search.h"

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 13, 25};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 9;
    std::cout << search(arr, arr_size, x) << std::endl;
    return 0;
} 