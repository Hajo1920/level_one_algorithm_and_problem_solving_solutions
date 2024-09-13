#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber(){

  int input;
  cout << "Enter a number: ";
  cin >> input;

  return input;
}

float AddUntillNegative99(float input){
  float sum = 0;  
  int count = 1;
  while( input != -99 ){  
    sum+= input;
    cout << "Add another number to add it to the previous input [" << count++ << "]: ";
    cin >> input;
  
  }
  return sum;
}

void PrintSum(float sum){
  
  cout << endl;
  cout << "___________________________" << endl;
  cout << "Total Sum: " << sum << endl;
}
int main(){
 
  PrintSum(AddUntillNegative99(ReadNumber()));  
  return 0;

}