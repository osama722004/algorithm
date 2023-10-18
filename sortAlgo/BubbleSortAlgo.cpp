#include <iostream>
  using namespace std;

void bubbleSort(int a[]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < (5 - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[]={3,1,8,5,6};
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < (5 - i - 1); j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  cout << endl << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
}