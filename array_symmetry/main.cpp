#include <bits/stdc++.h>

using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        bool hor = true, vert = true;
        char A[N][N];
        for (int i =0; i < N; i++){
            for  (int j = 0; j < N; j++){
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < N; i++){
            for (int j = 0, k = N-1; j <= k; j++,k--){
                if(A[i][k] != A[i][j])
                    hor = false;
                    break;
            }
        }
        for (int i = 0; i < N; i++){
            for (int j = 0, k = N-1; j <= k; j++,k--){
                if (A[k][i] != A[j][i])
                    vert = false;
                    break;
            }
        }
        if (vert && hor)
            cout << "BOTH\n";
        else if (hor && !vert)
            cout << "VERTICAL\n";
        else if (vert && !hor)
            cout << "HORIZONTAL\n";
        else
            cout << "NO\n";
    }
    return 0;
}
