#include <bits/stdc++.h>
using namespace std;
bool exists(int A[], int N, int left, int right){
    if (left == right)
        return true;
    bool ret = false;
    for (int i = left + 1; i < right; i++){
        for (int j =0; j <= i; j++){
            if (A[j] == temp){
                ret = true;
                continue;
            }
            if (!ret){
                return false;
            }
        }

    }
    return true;
}

int main(){
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    cout << exists(A, N, min_element(A), max_element(A+N)) << "\n";

    return 0;
}
