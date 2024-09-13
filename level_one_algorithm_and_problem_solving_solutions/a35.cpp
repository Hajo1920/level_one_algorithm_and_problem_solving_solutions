
#include<iostream>
#include <cmath>

using namespace std;

void ReadInputs(float& Penny, float& Nickel, float& Dime, float& Quarter, float& Dollar){
	
	cout << "Enter Total Pennies: ";
	cin >> Penny;
	cout << "Enter Total Nickels: ";
	cin >> Nickel;
	cout << "Enter Total Dime: ";
	cin >> Dime;
	cout << "Enter Total Quarters: ";
	cin >> Quarter;
	cout << "Enter Total Dollar: ";
	cin >> Dollar;
}

float CalculateTotalPennies(float Penny, float Nickel, float Dime, float Quarter, float Dollar){
	float TotalPennies = Penny + (Nickel*5) + (Dime*10) + (Quarter*25) + (Dollar * 100);
	return TotalPennies;
}
float CalculateTotalDollar(float Penny, float Nickel, float Dime, float Quarter, float Dollar){
	float TotalDollar = Dollar + (Penny * 0.01) + (Nickel * 0.05) + (Dime * 0.10) + (Quarter * 0.25);
	return TotalDollar;
}

void PrintResult(float TotalPennies, float TotalDollar){
	cout << "Total Pennies: " << TotalPennies << endl;
	cout << endl;
	cout << "Total Dollar: " << TotalDollar << endl;

}

int main(){

	float Penny, Nickel, Dime, Quarter, Dollar;

	ReadInputs(Penny, Nickel, Dime, Quarter, Dollar);
	cout << endl;
	PrintResult(CalculateTotalPennies(Penny, Nickel, Dime, Quarter, Dollar),CalculateTotalDollar(Penny, Nickel, Dime, Quarter, Dollar));

	return 0;
}
