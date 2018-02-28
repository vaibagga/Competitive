#include <bits/stdc++.h>

using namespace std;



int main()
{
    map <int, string> m;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        int num;
        string str;
        cin >> num >> str;
        m.insert(pair(num, str));
    }

    return 0;
}
