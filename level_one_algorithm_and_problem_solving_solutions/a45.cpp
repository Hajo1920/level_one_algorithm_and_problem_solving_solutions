
#include<iostream>
#include <cmath>

using namespace std;
enum enMonths {January=1, February=2, March=3, April=4, May=5, June=6, July=7, August=8, September=9, October=10, Novermber=11, December=12};

int ReadMonth(){
     int month;

    do{
        cout << "Enter a number from 1-12 to find Month of the year: ";
        cin >> month;
    }while(month <= 0);
    return month;
}

string GetMonthOfTheYear(int month){
    switch (month) {
        case enMonths::January:
        return "This is January";

        case enMonths::February:
        return "This is February";

        case enMonths::March:
        return "This is March";

        case enMonths::April:
        return "This is April";

        case enMonths::May:
        return "This is May";

        case enMonths::June:
        return "This is June";

        case enMonths::July:
        return "This is July";

        case enMonths::August:
        return "This is August";

        case enMonths::September:
        return "This is September";

        case enMonths::October:
        return "This is October";

        case enMonths::Novermber:
        return "This is Novermber";

        case enMonths::December:
        return "This is December";

        default: return "Invalid Month";

    }
}

void PrintMonthOfTheYear(string month){
    cout << month << endl;
}



int main(){
    PrintMonthOfTheYear(GetMonthOfTheYear(ReadMonth()));
	return 0;
}