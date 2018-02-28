#include <bits/stdc++.h>

using namespace std;

bool Contiguous(int A[], int N){
    int maximum = *max_element(A, A + N), minimum = *min_element(A, A + N);
    bool visited[maximum  - minimum + 1] = {false}, allVisited = true;
    for (int i = 0; i < N; i++)
        visited[A[i] - minimum] = true;
    for (int i = 0; i < maximum - minimum + 1; i++)
        allVisited = allVisited && visited[i];
    return allVisited;
}

int main()
{
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << (Contiguous(A, N)?"Yes":"No") << "\n";
    }
    return 0;
}
