/*
You have been given a String S

. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S

. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 1≤|S|≤100

Note
String S
consists of lowercase English Alphabets only.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,c;
    cin >> s;
    c = s;
    reverse(s.begin(),s.end());
    if (s==c)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
