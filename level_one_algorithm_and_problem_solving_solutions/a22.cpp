
#include<iostream>
#include <cmath>

using namespace std;

void ReadInput(float& Length, float& Width){
	cout << "Find Circle Area Inscribed in isosceles triangle" << endl;
	cout << "Enter Triangle Length: ";
	cin >> Length;
    cout << "Enter Triangle Width: ";
    cin >> Width;
}

float FindCircleArea(float Length, float Width){

	const float PI = 3.141592643589793238;
	return ceil(PI * pow(Width, 2)/4 * ((2* Length-Width) / (2*Length + Width)));
}

void PrintResult(float result){
	cout << "Area: " << result << endl;
}

int main(){

    float Length, Width;

	ReadInput(Length, Width);
	PrintResult(FindCircleArea(Length, Width));

	cout << endl;

	return 0;
}
