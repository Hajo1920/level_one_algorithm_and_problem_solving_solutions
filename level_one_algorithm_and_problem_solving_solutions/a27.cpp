#include<iostream>
#include<cmath>
using namespace std;


int ReadNumber(int Number){
  cout << "Enter a number: " << endl;
  cin >> Number;

  return Number;
}
void printNumbersDecendingUsingWhileStatement(int num){
  cout << "Using  while " << endl;
  int x = num+1;
  while(x-1 >= 1){
    x--;
    cout << x << endl;
  }
}

void printNumbersDecendingUsingDoWhileStatement(int num){
  cout << "Using Do while " << endl;
  int x = num+1;
  do{
    x--;
    cout << x << endl;
  }while(x-1 >= 1);
}

void printNumbersDecendingUsingForStatement(int num){
  cout << "Using for " << endl;
  for( int x = num; x >= 1; x--){
    cout << x << endl;
  }
}
int main(){
  int Number;

  int num = ReadNumber(Number);
  printNumbersDecendingUsingWhileStatement(num);
  printNumbersDecendingUsingForStatement(num);
  printNumbersDecendingUsingDoWhileStatement(num);


  return 0;

}

