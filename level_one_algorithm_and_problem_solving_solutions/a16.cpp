
#include<iostream>
#include <cmath>

using namespace std;

void ReadInputs(float& Sidearea, float& Diagonal){
	cout << "Find Rectangle area using diagonal and sidearea of rectangle" << endl;
	cout << "Enter Sidearea of the rectangle: ";
	cin >> Sidearea;
	cout << "Enter Diagonal of the rectangle: ";
	cin >> Diagonal;

}

float FindSideArea( float Sidearea, float Diagonal){

	return (Sidearea * sqrt(pow(Diagonal,2)-pow(Sidearea,2)));
}

void PrintResult(float result){
	cout << "Area: " << result << endl;
}

int main(){

    float Sidearea, Diagonal;

	ReadInputs(Sidearea, Diagonal);
	cout << endl;
	PrintResult(FindSideArea(Sidearea, Diagonal));

	return 0;
}
