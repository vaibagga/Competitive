/*
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l
, r and k

.

Output Format
Print the required answer on a single line.

Constraints
1≤l≤r≤1000

1≤k≤1000
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, k,counter = 0;
    cin >> l >> r >> k;
    for (int i = l; i < r+1; i++){
        if (i%k == 0){
            counter++;
            }
    }
    cout << counter;
    return 0;

}
