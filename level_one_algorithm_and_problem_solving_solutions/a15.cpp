
#include<iostream>
#include <cmath>

using namespace std;

void ReadInputs(int& Number1, int& Number2){
	 cout << "--Rectangle Area Calculator--" << endl;

	cout << "Enter Rectangle Length: ";
	cin >> Number1;

	cout << "Enter Rectangle Width: ";
	cin >> Number2;

}

int RectangleArea(int Number1, int Number2){

	return Number1 * Number2;
}

void PrintResult(int Number1, int Number2){
	cout << "Area: " << RectangleArea(Number1, Number2) << endl;
}

int main(){

	int Number1,Number2;
	ReadInputs(Number1, Number2);
	cout << endl;
    PrintResult(Number1, Number2);

	return 0;
}
