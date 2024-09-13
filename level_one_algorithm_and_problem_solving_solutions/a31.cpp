
#include<iostream>
#include <cmath>

using namespace std;

int ReadInputs(){
	int Number;

	cout << "Enter Any Number: ";
	cin >> Number;

	return Number;
}

void CalculatePower(int Number){
	int a, b, c;
	a = Number * Number; //2
	b = Number * Number * Number; //3
	c = Number * Number * Number * Number; //4

	cout << a << endl << b << endl << c << endl;
}

int main(){

    

	cout << endl;

	CalculatePower(ReadInputs());
	return 0;
}
