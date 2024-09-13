
#include<iostream>
#include <cmath>
#include <iterator>

using namespace std;

enum enDays {monday=1, tuesday=2, wednesday=3, thursday=4, friday=5, saturday=6, sunday=7};
string days[7] = {    "This is Monday",
                      "This is Tuesday",
                      "This is Wednesday",
                      "This is Thrusday",
                      "This is Friday",
                      "This is Saturday",
                      "This is Sunday"
                          };

int ReadNumber(){
     int date;

    do{
        cout << "Enter a number from 1-7 to find date of the week: ";
        cin >> date;
    }while(date <= 0);

    return date;
}

void PrintDays(int date){
    for(int x = date; x <= size(days); x++){;
        cout << days[x-1] << endl;
        break;
    }
}

int main(){
    PrintDays(ReadNumber());
	return 0;
}