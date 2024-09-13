
#include<iostream>
#include <cmath>

using namespace std;
int correctPin = 1234;

int ReadPIN(){
       int Pin;
       do{
        cout << "Please Enter PIN code ? " << endl;
        cin >> Pin;
       }while(Pin != correctPin);

       return Pin;
}

string PrintBalance(int Pin){
    
    
    if(Pin == correctPin) return "Unlocked! -> your balance is: 56,000$";
    else return "Incorrect PIN!!";
    

}

int main(){
    cout << endl;
    cout << PrintBalance(ReadPIN()) << endl;
	return 0;
}