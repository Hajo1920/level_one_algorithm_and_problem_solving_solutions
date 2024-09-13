
#include<iostream>
#include <cmath>

using namespace std;

float ReadInput(float Diameter){
	cout << "Enter Circle Diameter: ";
	cin >> Diameter;

	return Diameter;
}

float FindCircleArea(float Diameter){
	const float PI = 3.141592643589793238;
	return ceil(PI * pow(Diameter,2)/4);
}

void PrintResult(float circleArea){
	cout << "Area: " << circleArea << endl;
}

int main(){


    float Diameter;
    

	cout << "Find Circle Area using Diameter" << endl;
	
	PrintResult(FindCircleArea(ReadInput(Diameter)));
	

	cout << endl;



	return 0;
}


