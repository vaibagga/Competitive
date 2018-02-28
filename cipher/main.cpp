#include <bits/stdc++.h>

using namespace std;

int main(){
    int key;
    string s;
    cin >> s >> key;
    for (int i =0 ; i < s.length(); i++){
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
            s[i] = char(65 + (int(s[i]) + key - 65)%26);
        else if (((int)s[i] >= 97 && (int)s[i] <= 122))
            s[i] = char(97 + (int(s[i]) + key - 97)%26);
        else if (((int)s[i] >= 48 && (int)s[i] <= 57))
            s[i] = char(48 + (int(s[i]) + key - 48)%10);
    }
    cout << s;
    return 0;

}
