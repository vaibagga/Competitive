/*
Given two strings of equal length, you have to tell whether they both strings are identical.

Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

Input :

    First line, contains an intger 'T' denoting no. of test cases.
    Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.

Output:

    For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.

Constraints:

    1<= T <=100
    1<= |S1| = |S2| <= 10^5
    String is made up of lower case letters only.

Note : Use Hashing Concept Only . Try to do it in O(string length) .
*/
#include <bits/stdc++.h>

using namespace std;
int num_anagram(string s1, string s2){
    int letter[26] = {0};
    for (int i = 0; i < s1.length();i++){
        letter[(int)s1[i]-97]++;
    }
    for (int i = 0; i < s2.length();i++){
        letter[(int)s2[i]-97]--;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++){
        sum += abs(letter[i]);
    }
    return sum;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        string s1, s2;
        cin >> s1 >> s2;
        if (num_anagram(s1,s2) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
