#include <iostream>

using namespace std;

void Merge(int input[], int mid, int size){
  int i = 0, j = mid, k = 0;
  int A[size];
  for (; k < size && i < mid && j < size; k++){
    if (input[i] <= input[j]){
      A[k] = input[i];
      i++;
    }
    else {
      A[k] = input[j];
      j++;
    }
  }
  if (i < mid){
    for (; i < mid; i++){
      A[k] = input[i];
      k++;
    }
  }
  if (j < size){
    for (; j < size; j++){
      A[k] = input[j];
      k++;
    }
  }
  for (int i = 0; i < size; i++)
    input[i] = A[i];
}

void mergeSort(int input[], int size){
    if (size <= 1)
        return;
    int mid = (size)/2;
  	mergeSort(input, mid);
	mergeSort(input + mid, size - mid);
  	Merge(input, mid, size);
}




int main(){
    int A[10] = {10,9,8,7,6,5,4,3,2,1};

    mergeSort(A, 10);
    for (int i = 0; i < 10; i++){
        cout << A[i] << " ";
    }
    return 0;
}
