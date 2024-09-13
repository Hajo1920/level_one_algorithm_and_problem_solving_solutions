
#include<iostream>
#include <cmath>

using namespace std;

enum enOperations {Addition='+', Subtraction='-', Multiplication='*', Division='/' };
void ReadInputs(char& operationType, float& Num1, float& Num2){
    
    
    cout << "Enter First Number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;
    do{
        cout << "Write [(+) for Addition ] [(-) for Subtraction] [(*) for Multiplication] [(/) for Division] ";
        cin >> operationType;
    }while((operationType != enOperations::Addition) && 
           (operationType != enOperations::Subtraction)  && 
           (operationType != enOperations::Multiplication)  && 
           (operationType != enOperations::Division));
}

float CalculateOperation(char operationType, float Num1, float Num2){


    if(operationType == enOperations::Addition) return Num1+Num2;
    else if(operationType == enOperations::Subtraction) return Num1 - Num2;
    else if(operationType == enOperations::Multiplication) return Num1 * Num2;
    else if(operationType == enOperations::Division) return Num1 / Num2;
    else return 0;
    
};


void PrintResult(float result){

    cout << "___________________________" << endl;
    cout << "Result: " << result << endl;
}


int main(){

    float Num1, Num2;
    char operationType;

    ReadInputs(operationType, Num1, Num2);
    PrintResult(CalculateOperation(operationType, Num1, Num2));
   



    
  
	return 0;
}