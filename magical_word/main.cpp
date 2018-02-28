#include <iostream>

using namespace std;
int nearestPrime(int x){
    if (x >= 65 && x <= 69)
        return 67;
    else if (x >= 70 && x <= 72)
        return 71;
    else if (x >= 73 && x <= 76)
        return 73;
    else if (x >= 77 && x <= 81)
        return 79;
    else if (x >= 81 && x <= 86)
        return 83;
    else if (x >= 87 && x <= 96)
        return 89;
    else if (x >= 97 && x <= 99)
        return 97;
    else if (x >= 100 && x <= 102)
        return 101;
    else if (x >= 103 && x <= 105)
        return 103;
    else if (x >= 106 && x <= 108)
        return 107;
    else if (x >= 109 && x <=  111)
        return 109;
    else
        return 113;

}
int main(){
    int T;
    cin >> T;
    while(T--){
        int len;
        string s;
        cin >> len >> s;
        for (int i = 0; i < len ; i++){
            s[i] = char(nearestPrime(int(s[i])));
        }
        cout << s;
    }
    return 0;
}

