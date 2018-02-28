/*
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo 109+7

.

Input Format:
The first line contains a single integer N
denoting the size of the array. The next line contains N

space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 109+7

.

Constraints:
1≤N≤103

1≤A[i]≤103
*/
#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
long long product(int A[], int size_A){
    long long prod = 1;
    for (int i = 0; i < size_A; i++){
        prod = (prod * A[i]) % m;
    }
    return prod;
}
int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cout << product(A,N) << "\n";
    return 0;
}
