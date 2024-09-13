
#include<iostream>
#include <cmath>

using namespace std;

float ReadInput(float Area){
	cout << "Enter Circle Area: ";
	cin >> Area;

	return Area;
}

float FindCircleArea(float Area){
	const float PI = 3.141592643589793238;
	return ceil(PI * pow(Area/2, 2));
}

void PrintResult(float circleArea){
	cout << "Area: " << circleArea << endl;
}

int main(){


    float Area;
    

	cout << "Find Circle Area inscribed in Square" << endl;
	
	PrintResult(FindCircleArea(ReadInput(Area)));
	

	cout << endl;



	return 0;
}


