/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

    Window Seat : WS
    Middle Seat : MS
    Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.
*/
#include <bits/stdc++.h>

using namespace std;

void solution(int seat){
    int mod = seat%12;
    switch(mod){
    case 0:
        cout << seat - 11 << " " << "WS\n";
        break;
    case 1:
        cout << seat + 11 << " " << "WS\n";
        break;
    case 2:
        cout << seat + 9 << " " << "MS\n";
        break;
    case 3:
        cout << seat + 7 << " " << "AS\n";
        break;
    case 4:
        cout << seat + 5 << " " << "AS\n";
        break;
    case 5:
        cout << seat + 3 << " " << "MS\n";
        break;
    case 6:
        cout << seat + 1 << " " << "WS\n";
        break;
    case 7:
        cout << seat - 1 << " " << "WS\n";
        break;
    case 8:
        cout << seat - 3 << " " << "MS\n";
        break;
    case 9:
        cout << seat - 5 << " " << "AS\n";
        break;
    case 10:
        cout << seat - 7 << " " << "AS\n";
        break;
    case 11:
        cout << seat - 9 << " " << "MS\n";
        break;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int seat;
        cin >> seat;
        solution(seat);
    }
    return 0;
}
