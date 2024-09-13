#include <iostream>
using namespace std;


float ReadHours(){
    float Hours;
    cout << "Enter Hours: ";
    cin >> Hours;

    while(Hours <= 0){
        cout << "Please use postive numbers only." << endl;
        cout << "Enter Hours: ";
        cin >> Hours;
    }

    return Hours;
}

float CalculateDays(int Hours){
    float Day =  Hours/24;

    return Day;
}

float CalculateWeeks(float Days){
    float Week = Days / 7;

    return Week;
}

void PrintDayAndHour(float Hours, float Days, float Week){
    cout << Hours << " Hours" << endl;
    cout << Days << " Days." << endl;
    cout << Week << " Weeks." << endl;
    
}
int main(){

    float Hours = ReadHours();
    PrintDayAndHour(Hours,CalculateDays(Hours), CalculateWeeks(CalculateDays(Hours)));

    return 0;
}