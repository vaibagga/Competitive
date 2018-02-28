#include <iostream>

using namespace std;

bool IsUniform(string s){
    s = s + s[0];
    int transition = 0;
    for (int i =0; i < s.length() - 1; i++){
        if (s[i] != s[i+1])
            transition++;
    }
    return (transition <= 2);
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        if (IsUniform(str))
            cout << "uniform\n";
        else
            cout << "non-uniform\n";
    }
    return 0;
}
