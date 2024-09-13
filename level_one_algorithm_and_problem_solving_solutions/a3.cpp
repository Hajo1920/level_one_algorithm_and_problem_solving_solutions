#include <iostream>
using namespace std;
enum enNumberType {Odd=1, Even=2};



int ReadNumber(){
    int number;
    cout << "Enter the number to check if even or odd: ";
    cin >> number;

    return number;
}

enNumberType CheckNumberType(int num){
    int result = num%2;
    if(result == 0){
        return enNumberType::Even;
    }else{
        return enNumberType::Odd;
    }
}

void PrintEvenOrOdd(enNumberType numberType){
    if(numberType == enNumberType::Even){
        cout <<" Number is Even" << endl;
    }else{
        cout << "Number is Odd" << endl;
    }
}

int main(){
    PrintEvenOrOdd(CheckNumberType(ReadNumber()) );
    return 0;
}