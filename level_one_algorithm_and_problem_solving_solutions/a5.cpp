#include<iostream>
#include <cmath>

using namespace std;
struct stInfo { 
    int Age; 
    string haveLicense; 
    string hasMiddleware;
    };
stInfo ReadUserInput(){
    stInfo Info;
    cout << "Looking for driver to hire!" << endl << endl;
    cout << "How old are you? -> ";
    cin >> Info.Age;
    cout << "Do you have a Driver License ? -> ";
    cin >> Info.haveLicense;
    cout << "Do you have any Middleware ? -> ";
    cin >> Info.hasMiddleware;


    return Info;
}
bool isAccepted(stInfo Info){

    if(Info.hasMiddleware == "yes"){
        return true;
    }else{
        return (Info.Age > 21 && Info.Age < 50) && (Info.haveLicense == "yes" || "YES" || "y" || "Y" || "yeah" || "yep");
    }
}
void CheckEligibility(stInfo Info){
     if(isAccepted(Info)){
        cout << "Congratulations! you are Eligbel and Hired." << endl;
    }else{
        cout << "We are sorry! you are not eleigble!" << endl;
    } 
}

int main(){
    CheckEligibility(ReadUserInput());
	return 0;
}