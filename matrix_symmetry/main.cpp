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
            for (int j = 0; j < N; j++){
                if(A[i][j] != A[i][N-j-1])
                    hor = false;
                if (A[N-j-1][i] != A[j][i])
                    vert = false;
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
