
#include<iostream>
#include <cmath>

using namespace std;

float ReadBill(){
	float Bill;

	cout << "Enter Total Bill: ";
	cin >> Bill;

	return Bill;
}

void PrintResult(float Bill){
	Bill = Bill * 1.1;
	Bill = Bill * 1.16;
	cout << endl;
	cout << "You will Pay: " << Bill << endl;
}

int main(){

	PrintResult(ReadBill());
	return 0;
}
