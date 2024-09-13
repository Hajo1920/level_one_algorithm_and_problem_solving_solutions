#include <iostream>
using namespace std;


void ReadInputs(int& Num1, int& Num2, int& Num3){
    cout << "Enter Number 1: ";
    cin >> Num1;
    cout << "Enter Number 2: ";
    cin >> Num2;
    cout << "Enter Number 3: ";
    cin >> Num3;
}

int CheckMaxOfTwoNumbers(int Num1, int Num2, int Num3){
    /*
       --  this was my Answer
        if((Num1 > Num2) && (Num1 > Num3)) return Num1;
    else if((Num2 > Num1) && (Num2 > Num3)) return Num2;
    else if((Num1 == Num2) && (Num2 == Num3) && (Num1 == Num3)) return 0;
    else return Num3;

    */
    
     // this is abo-hadouds answer
      if(Num1 > Num2){
        if(Num1 > Num3) return Num1;
        else return Num3;
    } else if(Num2 > Num3 ) return Num2;
      else if(Num3 > Num2) return Num3;
      else return 0;



 }

void PrintResult(int Num1, int Num2, int Num3, int result){
    if(result == 0) cout << "All Numbers are Equal " << endl;
    else cout << "The Maximum Number of " << Num1 << ", " << Num2 << " and " << Num3 << " is " << result << endl;
}
int main(){ 
    int Num1, Num2, Num3;
    ReadInputs(Num1, Num2, Num3);
    PrintResult(Num1, Num2, Num3, CheckMaxOfTwoNumbers(Num1, Num2, Num3));

    return 0;
}