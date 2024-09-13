#include<iostream>
#include<cmath>
using namespace std;

enum enEvenOrOdd {Even=0, Odd=1};

int ReadNumber(){

  int Number;
  cout << "Enter a number: " << endl;
  cin >> Number;

  return Number;
}

int printOddNumbersUsingWhile(int Number, int sum){
  cout << "Using  while " << endl;
  int x = 0;
  while(x <= Number-1 ){
    x++;
    if(x%2 == enEvenOrOdd::Odd){
    
    sum = sum+x;
   
    }
  }
  return sum;
}

int printOddNumbersUsingDoWhile(int Number, int sum){
  cout << "Using Do while " << endl;
  int x = 0;
  do{
    x++;
    if(x%2 == enEvenOrOdd::Odd){
    
    sum = sum+x;
  }
  } while(x <= Number-1 );

  return sum;
}

int printOddNumbersUsingFor(int Number, int sum){
  cout << "Using For" << endl;
  for(int x = 0; x <= Number; x++){
     if(x%2 == enEvenOrOdd::Odd){
    
    sum = sum+x;
  }
  }
  return sum;
}

int main(){

  int sum = 0;


  cout << printOddNumbersUsingWhile(ReadNumber(),sum) << endl;
  cout << printOddNumbersUsingDoWhile(ReadNumber(),sum) << endl;
  cout << printOddNumbersUsingFor(ReadNumber(),sum) << endl;

  return 0;

}