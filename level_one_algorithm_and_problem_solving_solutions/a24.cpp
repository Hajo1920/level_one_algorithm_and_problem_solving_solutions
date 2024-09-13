
#include<iostream>
#include <cmath>

using namespace std;

short ReadInput(short Age){
    cout << "Write your Age ? ";
    cin >> Age;

    return Age;
}

bool CalculateAgeRange(short Age){
     if(Age>=20 && Age<=45){
      
        return true;
    }else{
       
        return false;
    };
}

void PrintResult(bool result){
    if(result) cout << "Your age is valid.";
    else cout << "Your age is unvalid.";
}

int main(){

    short Age;

    PrintResult(CalculateAgeRange(ReadInput(Age)));

	return 0;
}