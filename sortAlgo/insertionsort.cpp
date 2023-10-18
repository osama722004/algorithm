#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int k, j;
    for (int i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k) {  
            arr[j + 1] = arr[j];
            j = j - 1; 
        }
        arr[j + 1] = k;
    }
}

int main() {
    int arr[] = { 9, 20, 11, 5, 4, 7, 19 };
    insertionSort(arr, 7);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}