#include <iostream>
using namespace std;

enum enMaximuOfTwo {Maximum=2, Minimum=1, Draw=0};

void ReadInputs(int& Num1, int& Num2){
    cout << "Enter Number 1: ";
    cin >> Num1;
    cout << "Enter Number 2: ";
    cin >> Num2;
}



enMaximuOfTwo CheckMaxOfTwoNumbers(int Num1, int Num2){
    if(Num1 > Num2) return  enMaximuOfTwo::Maximum;
    else if(Num2 == Num1) return  enMaximuOfTwo::Draw;
    else return  enMaximuOfTwo::Minimum;
}

int Result(int Num1, int Num2){
    if(CheckMaxOfTwoNumbers( Num1, Num2) ==  enMaximuOfTwo::Maximum) return Num1;
    else if (CheckMaxOfTwoNumbers( Num1, Num2) ==  enMaximuOfTwo::Draw) return false;
    else return Num2;
     ;
}

void PrintResult(int Num1, int Num2, int result){
    if(result == 0) cout << "Both Numbers are Equal " << endl;
    else cout << "The Maximum Number of " << Num1 << " and " << Num2 << " is " << result << endl;
}
int main(){ 
    int Num1, Num2;
    ReadInputs(Num1, Num2);
    PrintResult(Num1, Num2, Result(Num1, Num2));

    return 0;
}