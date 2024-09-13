
#include<iostream>
#include <cmath>

using namespace std;

void ReadInput(float& Number1, float& Number2){



	cout << "Enter Triangle Width: ";
	cin >> Number1;

	cout << "Enter Triangle Height: ";
	cin >> Number2;
}

float CalculateArea(float Number1, float Number2){
	float Area = (Number1/2) * Number2;

	return Area;
}

void PrfloatResult(float Area){
	cout << "Triangle Area: " << Area << endl;
}

int main(){

	float Number1,Number2;

	cout << "--Triangle Area Calculator--" << endl;
	ReadInput(Number1, Number2);
    
	PrfloatResult(CalculateArea(Number1, Number2));

	cout << endl;
    


	return 0;
}
