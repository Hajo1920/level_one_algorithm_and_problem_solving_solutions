#include<iostream>
#include <cmath>

using namespace std;


float ReadInput(float radius){
	cout << "Enter Circle Radius: ";
	cin >> radius;

	return radius;
}

float FindCircleArea(float Radius){
	const float PI = 3.141592643589793238;
	return ceil(PI * pow(Radius,2));
}

void PrintResult(float circleArea){
	cout << "Area: " << circleArea << endl;
}

int main(){


    float Radius;
    

	cout << "Find Circle Area using Radius" << endl;
	
	PrintResult(FindCircleArea(ReadInput(Radius)));
	

	cout << endl;

	



	return 0;
}
