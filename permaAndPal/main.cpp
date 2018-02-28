#include <bits/stdc++.h>

int length(string s, int output[]){
    int characters[26];
    for (int i = 0; i < s.length(); i++){
        characters[s[i] - 'a']++;
    }
    int numOdd = 0;
    for (int i = 0; i < 26; i++){
        if (characters[i] % 2)
            numOdd++;
    }
    if (numOdd > 1)
        return -1;
    if (numOdd == 1 && (s.length()!2==0))
    }


using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        string s;
        cin >> s;

    }
}
