#include <iostream>
#include "functions.h"

int main()
{
    int arr[] = {5, 7, 20};
    int x = 8, p = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr_new[++n];
    insert_sorted(arr, arr_new, n, x);
    for(int i = 0; i < n; i++)
        std::cout << arr_new[i] << " ";
    std::cout << std::endl;
    return 0;
}