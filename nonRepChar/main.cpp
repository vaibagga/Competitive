#include<iostream>
#include<cstring>
#include<map>
using namespace std;


void nonRepeatingCharacter(string str){
  map <char, int> m;
  for (int i = 0; i < str.length(); i++)
    m[str[i]] = m[str[i]] + 1;
  map <char, int> :: iterator it;
  for (it = m.begin(); it != m.end(); it++){
    cout << it -> first << " " << it -> second << "\n";
  }
  /*for (it = m.begin(); it != m.end(); it++){
    if (it -> second == 1){
      return it -> first;
  	}
  //Write your code here
   }
   */

}
int main(){
    nonRepeatingCharacter("aDcadhc");
    nonRepeatingCharacter("gdhIgHada");
}


