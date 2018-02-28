#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long NumLovely(string s){
    int lovely = 0;
    for  (int i = 0; i + 3 < s.length(); i++){
            string temp = s.substr(i, 4);
            sort(temp.begin(), temp.end());
            if (temp == "cefh")
                lovely++;
        }
        return lovely;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        string input;
        cin >> input;
        if (NumLovely(input) == 0)
            cout << "normal\n";
        else
            cout << "lovely " << NumLovely(input) << "\n";
    }

    return 0;
}
