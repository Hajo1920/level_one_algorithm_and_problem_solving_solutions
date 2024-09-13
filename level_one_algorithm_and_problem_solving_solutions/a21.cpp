
#include<iostream>
#include <cmath>

using namespace std;

float ReadInput(float L){

	cout << "Enter Circumference Length: ";
	cin >> L;

	return L;
}

float FindCircleArea(float L){
	const float PI = 3.141592643589793238;
	return ceil(pow(L,2)/ (4*PI));
}

void PrintResult(float L){
		cout << "Area: " << L << endl;
}

int main(){

    float L;
    
	cout << "Find Circle Area along the circumference" << endl;
	
	PrintResult(FindCircleArea(ReadInput(L)));
	
	cout << endl;

	return 0;
}
