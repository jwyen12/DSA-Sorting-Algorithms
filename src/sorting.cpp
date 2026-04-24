#include "../include/sorting.h"
#include <climits>

namespace sorting{
    void insertionSort(int arr[], int size){
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


    void bubbleSort(int arr[], int size){
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


    void selectionSort(int arr[], int size){
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
        if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
        }
    }


    void merge(int arr[], int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        int* left = new int[n1];
        int* right = new int[n2];

        for (int i = 0; i < n1; i++)
            left[i] = arr[low + i];
        for (int j = 0; j < n2; j++)
            right[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = low;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i++];
            } else {
                arr[k] = right[j++];
            }
            k++;
        }

        while (i < n1) arr[k++] = left[i++];
        while (j < n2) arr[k++] = right[j++];

        delete[] left;
        delete[] right;
}


    void quickSort(int arr[], int low, int high){
        if(low < high){
            int p = partition(arr,low,high);
            quickSort(arr, low, p-1);
            quickSort(arr, p+1, high);
        }
    }


    int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return (i + 1);
}
}
