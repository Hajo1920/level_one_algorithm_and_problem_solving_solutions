#include<iostream>
#include<cmath>
using namespace std;

enum enEvenOdd {Even=0, Odd=1};

int ReadInput(int Number){
  cout << "Enter a number: " << endl;
  cin >> Number;

  return Number;

}

int printEvenNumbersUsingWhile(int Number, int sum){
  cout << "Using While statement" << endl;
  int x = 1;
  while( x <= Number){
    x++;
    if(x%2 == enEvenOdd::Even){
    
      sum = sum+x;
   
    }
  }
  return sum;
}

int printEvenNumbersUsingDoWhile(int Number, int sum){
  int x = 1;
  cout << "Using Do while statement" << endl;
  do{
    x++;
    if(x%2 == enEvenOdd::Even){
    
      sum = sum+x;
   
    }
  }while(x <= Number);

  return sum;
};

int printEvenNumbersUsingFor(int Number, int sum){
  cout << "Using For statement" << endl;
  for(int x = 1; x <= Number; x++){
    if(x%2 == enEvenOdd::Even){
      sum+=x;
    }
  }
  return  sum;
}

int main(){
  int Number;
  int sum = 0;
 

  cout << printEvenNumbersUsingWhile(ReadInput(Number), sum) << endl;
  cout << printEvenNumbersUsingDoWhile(ReadInput(Number), sum) << endl;
  cout << printEvenNumbersUsingFor(ReadInput(Number), sum) << endl;


  return 0;

}