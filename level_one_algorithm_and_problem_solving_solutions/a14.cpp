#include<iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadNumbers(int& Number1, int& Number2){
	cout << "Enter Number-1 for swap: ";
	cin >> Number1;

	cout << "Enter Number-2 for swap: ";
	cin >> Number2;
}

void Swap(int& Number1, int& Number2){

    

	int Temporary;
	Temporary = Number1;
	Number1 = Number2;
	Number2 = Temporary;

	cout << endl;
	
}
void BeforeSwap(int Number1, int Number2){
	cout << "Before Swapping: " << Number1 << " - " << Number2 << endl;
}

void AfterSwap(int Number1, int Number2){
	cout << "After Swapping: " << Number1 << " - " << Number2 << endl;
}

int main(){

	int Number1,Number2;
	ReadNumbers(Number1, Number2);
	BeforeSwap(Number1, Number2);
	Swap(Number1, Number2);
	AfterSwap(Number1, Number2);

	Swap(Number1, Number2);

	cout << endl;
	

	return 0;
}

