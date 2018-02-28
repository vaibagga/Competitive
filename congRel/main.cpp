#include <iostream>

using namespace std;

long long Solution(int N, int K){
    int rem = N/K;
    int A[K];
    for (int i = 0; i < K; i++){
        A[i] = N/K;
        if (i <= N%K && i > 0)
            A[i]++;
    }
    long long sum = 0;
    for (int i = 0; i < K; i++)
        sum = sum + (A[i]*(A[i]-1))/2;
    return sum;
}

int main(){
    unsigned int N, K;
    cin >> N >> K;
    cout << Solution(N, K) << "\n";
    return 0;
}
