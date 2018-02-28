#include <iostream>
using namespace std;
void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int size){
  int pivot = arr[0], pivot_index = 0;
  for (int i = 0; i < size; i++){
    if (arr[i] < pivot)
      pivot_index++;
  }
  swap(&arr[0], &arr[pivot_index]);
  int i = 0, j = size - 1;
  for (;i < pivot_index && j > pivot_index;){
    if (arr[i] > pivot && arr[j] < pivot){
      swap(&arr[i], &arr[j]);
      i++;
      j--;
    }
    else if (arr[i] < pivot)
      i++;
    else if (arr[j] > pivot)
      j--;
  }
}


void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
  int p = partition(input, size);
  quickSort(input, p);
  quickSort(input + p + 1, size - p);
}


void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
  if (size <= 1)
    return;

  int p = Partition(input, size);
  quickSort(input, p);
  quickSort(input + p + 1, size - p - 1);
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    quickSort(arr, 10);
    for (int i = 0; i < 10; i++)    cout << arr[i] << " ";
    return 0;
}
