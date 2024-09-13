
#include<iostream>
#include <cmath>

using namespace std;


void ReadInput(float& A, float& B, float& C){
	cout << "Find Circle Area discribed around an arbitary triangle" << endl;
	cout << "Enter Triangle Side A: ";
	cin >> A;
    cout << "Enter Triangle Side B: ";
    cin >> B;
	cout << "Enter Triangle Side C: ";
	cin >> C;
}

float FindCircleArea(float A, float B, float C){

	const float PI = 3.141592643589793238;
	float P = (A + B + C)/2;

	return round(PI * (pow((A*B*C)/(4*sqrt(P*(P-A)*(P-B)*(P-C))),2)));
}

void PrintResult(float result){
	cout << "Area: " << result << endl;
}

int main(){

    float A, B, C;

	ReadInput(A, B, C);
    PrintResult(FindCircleArea(A, B, C));

	cout << endl;

	

	return 0;
}
