#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber(int Number){
  cout << "Enter a number: " << endl;
  cin >> Number;

  return Number;
}
void printNumbersAccendingUsingWhileStatement(int num){
  cout << "Using  while " << endl;
  int x = 0;
  while(x <= num-1 ){
    x++;
    cout << x << endl;
  }
}

void printNumbersAccendingUsingDoWhileStatement(int num){
  cout << "Using Do while " << endl;
  int x = 0;
  do{
      x++;
    cout << x << endl;
  }while(x <= num-1 );
}

void printNumbersAccendingUsingForStatement(int num){
  cout << "Using for " << endl;
  for(int x = 0; x <= num-1; x++){
    cout << x+1 << endl;
  }
}
int main(){
  int Number;

  int num = ReadNumber(Number);
  printNumbersAccendingUsingWhileStatement(num);
  printNumbersAccendingUsingForStatement(num);
  printNumbersAccendingUsingDoWhileStatement(num);


  return 0;

}