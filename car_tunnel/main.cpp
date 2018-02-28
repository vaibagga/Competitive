#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        float A[N];
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
        float C, D, S;
        cin >> C >> D >> S;
        cout << (C-1) * *max_element(A, A+N) << "\n";
    }
    return 0;
}
