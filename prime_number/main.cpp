/*
You are given an integer N. You need to print the series of all prime numbers till N.

Input Format

The first and only line of the input contains a single integer N denoting the number till where you need to find the series of prime number.

Output Format

Print the desired output in single line separated by spaces.

Constraints

1<=N<=1000
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        int count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
            count++;
        }
    if(count==2)
        cout<<i<<" ";
    }
return 0;
}
