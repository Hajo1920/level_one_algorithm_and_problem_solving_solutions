#include<iostream>
#include<cmath>
using namespace std;

void PrintAlphabets(){

  for(int x = 65; x <= 90; x++){   
     cout << char(x) << endl;;
  }
  
}
int main(){
  PrintAlphabets();  // Function call to print alphabets from A to Z.
  return 0;

}