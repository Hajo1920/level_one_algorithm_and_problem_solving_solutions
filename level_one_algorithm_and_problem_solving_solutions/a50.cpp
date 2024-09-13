
#include<iostream>
#include <cmath>

using namespace std;

int correctPin = 1234;
int ReadPinAnd3Attempts(string message){
   int Pin;
    cout << message << "-> " << endl;
    cin >> Pin;
    
    return Pin;
}

bool ReadAttemptsLeft(int Pin){

  int attempts = 3;
  while(Pin != correctPin){
    attempts--;
     if(attempts == 0){
      cout << "You have reached the maximum number of attempts. Account locked!" << endl;
      return false;
    }
     cout << attempts << " try left!"<< "Please Write the correct PIN ? " << endl;
     cin >> Pin;
 
}
return true;
}

void PrintBalance(bool attemptResult){

    if(attemptResult){
      cout << "Unlocked! -> your balance is: 56,000$" << endl;
    }
  
}
int main(){
  PrintBalance(ReadAttemptsLeft(ReadPinAnd3Attempts("Enter you account PIN")));
	return 0;
}