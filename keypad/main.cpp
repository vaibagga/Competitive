#include <bits/stdc++.h>
using namespace std;

int keypad(int num, string output[]){
    // base case
  	if (num < 2){
        output[0] = "";
        return 1;
  	}
  	string numbers[10] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  	string current = numbers[num % 10];
    int previous = keypad(num/10, output);
    int maximum = (current.length() >= 1 ? current.length() : 1);
    for (int i = 0; i < maximum * previous; i++)
        output[i] = output[i % previous];
    int k = 0;
    for (int j = 0; j < maximum; j++){
        for (int i = 0; i < previous; i++){
            output[k] = output[k] + current[j];
            k++;
        }
    }
    return previous * maximum;
}

int main(){
    int N;
    cin >> N;
    string output[1000];
    int length = keypad(N, output);
    //for (int i = 0; i < length; i++)
      //  cout << output[i] << "\n";
    //cout << length << "\n";
    //string s1[3] = {"ab","ab","ac"};
    //char s2[3] = {'d','e','f'};
    //createCopies(s1, s2, 3, 3);
    for (int i = 0; i < length; i++)
        cout << output[i] << "\n";
    cout << length;
    return 0;
}
