#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <set>
#include <map>
using namespace std;

void MapExample(){
    int arr[] = {1,2,3,4,5,6,5};
    map <int, int> m;
    for (int i = 0; i < 7; i++)
        m[arr[i]] = m[arr[i]] + 1;
    map <int, int> :: iterator it;
    for (it = m.begin(); it!= m.end(); it++)
        cout << it->first << ": " << it -> second << "\n";
}
void SetExample(){
    set <int> s;
    int arr[] = {1,2,3,4,5,6,5};
    for (int i = 0; i < 7; i++)
        s.insert(arr[i]);
    set <int> :: iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << "\n";
    if (s.find(10) == s.end())
        cout << "not found\n";
    else
        cout << "found\n";
    }

void VectorEx(){
    vector <int> v;
    vector <int> v1(5);
    vector <int> :: iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";
    cout << "\n";
    for (int i = 0; i < 5; i++)
        v.push_back(i+1);
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << "\n";
}

void StringEx(){
    string s = "Vaibhav";
    string s1(s,2,5);
    cout << s1 << "\n";
    string s2 = s.substr(2,5);
    cout << s2 << "\n";
    if (!s1.compare(s2))
        cout << "Equal strings\n";
    else
        cout << "Not equal\n";
}

void PairedSetEx(){
    pair <int, char> p;
    p = make_pair(2,'b');
    pair <int, char> p2(1,'a');
    cout << p.first << " " << p.second << "\n";
    cout << p2.first << " " << p2.second << "\n";
}

int main() {

    VectorEx();
    StringEx();
    PairedSetEx();
    SetExample();
    MapExample();
    /*
    for (int i = 0; i < v.size(); i++)
        v[i] = i+1;
    */
    /*
    for (int i = 0; i < 5; i++)
        v.push_back(i+1);
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << "\n";
    */
    return 0;
}
