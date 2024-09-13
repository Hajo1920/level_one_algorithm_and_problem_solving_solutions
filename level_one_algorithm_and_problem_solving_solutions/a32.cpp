#include<iostream>
#include<cmath>
using namespace std;

void ReadInputs(int& Number, int& power){
   cout << "Enter a number: ";
  cin >> Number;
  cout << "Enter the power: ";
  cin >> power;
}

int CalculatePower(int Number, int power){
  int result = 1;
  for(int i = 0; i < power; i++){
   if(power == 0)
    return 1;
   else if(power == 1){
    return Number;
   }
  result *= Number;
}
return result;
}

void PrintResult(int Number, int power){
    cout << "Power of " << Number << " By "<< power << " is: " << CalculatePower(Number, power) << endl;
}
int main(){
  int Number;
  int Power;

  ReadInputs(Number, Power);
  PrintResult(Number, Power);

  return 0;

}