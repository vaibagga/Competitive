#include <bits/stdc++.h>

using namespace std;

string CommonCharacterConcat(string s1, string s2){
    int occurence1[256] = {0}, occurence2[256] = {0};
    for (int i = 0; i < s1.length(); i++){
        occurence1[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++){
        occurence1[s2[i]]++;
    }
    string sum = s1 + s2, retString = "";
    for (int i = 0; i < sum.length(); i++){
        char temp = sum[i]
        if (!(occurence1[sum[i]] && occurence2[sum[i]]))
            retString += sum[i];
    }
    return retString;
}

int main()
{
    int T;
    cin >> T;
    while (T--){
        string str1, str2;
        cin >> str1 >> str2;
        cout << CommonCharacterConcat(str1, str2) << "\n";
    }
    return 0;
}
