#include <iostream>

using namespace std;

#include <vector>
int* stockSpan(int *price, int size) {
  int result[size];
  result[0] = 1;
  for (int i = 1; i < size; i++){
    if (price[i] > price[i-1])
      result[i] = result[i-1] + 1;
    else
      result[i] = 1;
	}

  return result;
}

int main()
{
    int A[] = {60, 70, 80, 100, 90, 75, 80, 120};
    for (int i = 0; i < 8; i++)
        cout << stockSpan(A, 8)[i] << " ";
    //cout << "Hello world!" << endl;
    return 0;
}
