#include <iostream>
// jai shri ram
using namespace std;

bool Possible(int Patent, int months, int workers, int maxPerMonth, string w){
    int odd = 0, even = 0;
    for (int j = 0; j < w.length(); j++){
        if (w[j]=='E')
            even++;
    }
    odd = workers - even;
    for (int i = 1; i <= months; i++){
        int working;
        if (i % 2 ==0){//even
            working = min(maxPerMonth, even);
            Patent -= working;
            even -= working;
        }
        else if (i % 2 == 1){
            working = min(maxPerMonth, odd);
            Patent -= working;
            odd -= working;
        }
        if (Patent <= 0)
            return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--){
        int patents, months, atmost, workers;
        string w;
        cin >> patents >> months >> atmost >> workers >> w;
        cout << (Possible(patents, months, workers, atmost, w) ? "yes\n":"no\n");
    }
    return 0;
}
