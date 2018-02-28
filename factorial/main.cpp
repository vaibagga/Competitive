/*
You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N

. You can read more about the factorial of a number here.

Input Format:
The first and only line of the input contains a single integer N

denoting the number whose factorial you need to find.

Output Format
Output a single line denoting the factorial of the number N

.

Constraints
1≤N≤10
*/
#include <bits/stdc++.h>
using namespace std;
long long factorial(long long num){
    if (num < 0)
        return 0;
    if (num == 0||num == 1)
        return 1;
    return num*factorial(num-1);
}
int main(){
    long long N;
    cin >> N;
    cout << factorial(N) << "\n";
    return 0;
}
