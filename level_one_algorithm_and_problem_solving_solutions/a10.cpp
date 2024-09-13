
#include<iostream>
#include <cmath>

using namespace std;

void ReadInputs(int& Mark1, int& Mark2, int& Mark3){
	cout << "Enter Mark-1: ";
	cin >> Mark1;

	cout << "Enter Mark-2: ";
	cin >> Mark2;

	cout << "Enter Mark-3: ";
	cin >> Mark3;

	cout << endl;
}
int SumOfInputs(int Mark1, int Mark2, int Mark3){

	return Mark1+ Mark2+ Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3){
	return (float) SumOfInputs(Mark1, Mark2, Mark3)/3;
}

void PrintResult(float result){
	cout << "The Average Mark is -> " << result << endl;
}

int main(){

	int Mark1,Mark2, Mark3;
	ReadInputs(Mark1, Mark2, Mark3);
	PrintResult(CalculateAverage(Mark1, Mark2, Mark3));
	return 0;
}
