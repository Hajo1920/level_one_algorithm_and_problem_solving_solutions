
#include<iostream>
#include <cmath>
#include <string>

using namespace std;
float ReadInput(){
	int Number;
	cout << "Please Enter any Number: ";
	cin >> Number;

	return Number;
}

float CalculateInput(int Number){
	return (float) Number/2;
}

void PrintResult(int result){
	cout << endl;
	cout << "Half of " << to_string(result) << " is " << CalculateInput(result) << endl;
}
int main(){	
	PrintResult(ReadInput());
	return 0;
}
