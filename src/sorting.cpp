#include "../include/sorting.h"
#include <climits>

namespace sorting{
    void insertionSort(int (&arr)[], int size){
        for(int i = 1; i<size; i++){
            int key = arr[i];
            int j = i -1;

            while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j= j-1;
            }
            arr[j+1] = key;
        }
    }


    void bubbleSort(int (&arr)[], int size){
        for(int i = 0; i < size; i++){
            for(int j = 1; j<size-i; j++){
                if(arr[j] < arr[j-1]){
                    int tmp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = tmp;
                }
            }
        }
    }


    void selectionSort(int (&arr)[], int size){
        int min = INT_MAX;
        int minIndex = 0;
        for(int i = 0; i<size; i++){
            for(int j = i; j<size; j++){
                if(arr[j] < min){
                    min = arr[j];
                    minIndex = j;
                }
            }
            int tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
            min = INT_MAX;
        }
    }


    void mergeSort(int arr[], int left, int right){

    }


    void quickSort(int arr[], int low, int high){

    }

}