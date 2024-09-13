
#include<iostream>
#include <cmath>

using namespace std;

void ReadInputs(int &Number1, int &Number2, int &Number3){
		cout << "Enter Number-1: ";
	cin >> Number1;

	cout << "Enter Number-2: ";
	cin >> Number2;

	cout << "Enter Number-3: ";
	cin >> Number3;

	cout << endl;
}

int TotalSum(int Number1, int Number2, int Number3){
	return Number1+Number2+Number3;
}

void PrintResult(int Result){
	cout << "Total Sum: " << Result << endl;
}

int main(){

	int Number1,Number2, Number3;

	ReadInputs(Number1, Number2, Number3);
	
	PrintResult(TotalSum(Number1, Number2, Number3));
	
	return 0;
}
