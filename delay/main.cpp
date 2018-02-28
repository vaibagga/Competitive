#include <iostream>

using namespace std;

long long delay (int tunnels,int separation, int numCars, int wating_time[]){


}

int main()
{
    int T;
    cin >> T;
    while (T--){
        int num_tunnels;
        cin >> num_tunnels;
        int wait[num_tunnels];
        for (int i = 0; i < num_tunnels; i++){
            cin >> wait[num_tunnels];
        }
        int C, D, S;
        cin >> C >> D >> S;
        cout << (float)C * D * num_tunnels / S << "\n";
    }
    return 0;
}
