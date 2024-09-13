
#include<iostream>
#include <cmath>

using namespace std;

void ReadBill(float& Bill, float& CashPaid){
	cout << "Enter Total Bill: ";
	cin >> Bill;
	cout << "Enter Total Cash paid: ";
	cin >> CashPaid;

	while (Bill <= 0){
		cout << "Please Enter Bill more than zero" << endl;
		cout << "Enter Total Bill: ";
	    cin >> Bill;
	    cout << "Enter Total Cash paid: ";
	    cin >> CashPaid;
	}

	cout << endl;

}

float RemainingCash(float Bill, float CashPaid){

	 return CashPaid-Bill;
	

}

void PrintResult(float reminder){
	if(reminder < 0) cout << "You have debt of " << reminder << endl;
	else cout << "You have remaining of " << reminder << endl;
}

int main(){

	float Bill, CashPaid;
	
	ReadBill(CashPaid, Bill);
	PrintResult(RemainingCash(CashPaid, Bill));

	return 0;
}
