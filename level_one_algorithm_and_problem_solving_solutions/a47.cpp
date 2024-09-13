#include<iostream>
#include<cmath>


using namespace std;

float ReadLoanAndPayment(string message){

  float Num;
  do{
     cout << message << ": ";
     cin >> Num;
  }while(Num <= 0);

  return Num;
}

float PrintLoanInstallmentMonths(float LoanAmount, float MonthlyPayment){
    
    return LoanAmount / MonthlyPayment;
}

int main() {

  float LoanAmount = ReadLoanAndPayment("Please enter loan amount");
  float MonthlyPayment = ReadLoanAndPayment("Please Enter your monthly payment plan");
  
  cout << endl;
  cout << "You will need " << PrintLoanInstallmentMonths(LoanAmount,MonthlyPayment) << " months to pay the loan" << endl;

  return 0;
}
