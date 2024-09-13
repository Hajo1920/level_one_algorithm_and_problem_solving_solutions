#include<iostream>
#include<cmath>
using namespace std;

int ReadPositiveNumber(string Message){
   int Number;
 do{ 

  cout << Message << endl;
  cin >> Number;

}while(Number <= 0);

  return Number;
}

int printFactorial(int Number){
    int factorial = 1;

  for(int x = Number; x >= 1; x--){
    
      factorial = factorial*x;
   
  }
  return factorial;
}

int main(){
 
  cout << printFactorial(ReadPositiveNumber( "Enter a Postive number: "))<< endl;

  return 0;

}