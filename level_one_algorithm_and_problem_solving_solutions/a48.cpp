#include<iostream>
#include<cmath>

using namespace std;

float ReadLoanAmountAndMonths(string message){
  float Num = 0;
  do{
    cout << message << ": ";
    cin >> Num;
  }while(Num < 0);

  return Num;
}

float PrintLoanAmountAndMonth(float LoanAmount, float Month){

  return LoanAmount / Month;
}


int main() {

  float LoanAmount = ReadLoanAmountAndMonths("Enter Loan Amount");

  float Months = ReadLoanAmountAndMonths("Enter Months palned for payment");

  cout << endl;

  cout << "You will pay $" << PrintLoanAmountAndMonth(LoanAmount, Months) << " Per Month to finish the loan" << endl;
 


  return 0;
}
