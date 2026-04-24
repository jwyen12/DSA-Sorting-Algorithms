#include "include/sorting.h"
#include <iostream>

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    sorting::selectionSort(arr, 9);
    for(int i = 0; i<9; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;

    int arr2[] = {9,6,7,14,5,4,3,2,1};
    sorting::selectionSort(arr2, 9);
    for(int i = 0; i<9; i++) std::cout << arr2[i] << " ";
    std::cout << std::endl;
    
    int arr3[] = {9,6,7,14,5,4,3,2,1};
    sorting::insertionSort(arr3, 9);
    for(int i = 0; i<9; i++) std::cout << arr3[i] << " ";
    std::cout << std::endl;

    int arr4[] = {9,6,7,14,5,4,3,2,1};
    sorting::quickSort(arr4, 0, 8);
    for(int i = 0; i<9; i++) std::cout << arr4[i] << " ";
    std::cout << std::endl;

    int arr5[] = {9,6,7,14,5,4,3,2,1,12, 11, 13, 5, 6, 7};
    sorting::mergeSort(arr5, 0, 14);
    for(int i = 0; i<15; i++) std::cout << arr5[i] << " ";
    std::cout << std::endl;


    return 0;
}