/*
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

    test cases,t
    two strings a and b, for each test case

Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.
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
        cout << num_anagram(s1,s2) << "\n";
    }
    return 0;
}
