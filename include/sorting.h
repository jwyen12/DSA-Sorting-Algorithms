#ifndef SORTING_H
#define SORTING_H


namespace sorting {
    void insertionSort(int (&arr)[], int size);
    void bubbleSort(int (&arr)[], int size);
    void selectionSort(int (&arr)[], int size);
    void mergeSort(int (&arr)[], int left, int right);
    void quickSort(int (&arr)[], int low, int high);
}



#endif