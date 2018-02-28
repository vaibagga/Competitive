/*
You are given an array of n numbers and q queries. For each query you have to print the floor of the expected value(mean) of the subarray from L to R.

Input:

First line contains two integers N and Q denoting number of array elements and number of queries.

Next line contains N space seperated integers denoting array elements.

Next Q lines contain two integers L and R(indices of the array).

Output:

print a single integer denoting the answer.

Constraints

:

1<= N ,Q,L,R <= 10^6

1<= Array elements <= 10^9

NOTE

Use Fast I/O
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,Q,element;
    cin >> N >> Q;
    long long sum[N] ={0}, temp_sum = 0;
    sum[-1] = 0;
    for (int i = 0; i < N; i++){
        cin >> element;
        temp_sum += element;
        sum[i] = temp_sum;
    }
    while (Q--){
        int L, R;
        cin >> L >> R;
        if (L==1)
            cout << abs(sum[R-1]/R) << "\n";
        else
            cout << abs((sum[R-1] - sum[L-2])/(R-L+1)) << "\n";
    }
    return 0;
}
