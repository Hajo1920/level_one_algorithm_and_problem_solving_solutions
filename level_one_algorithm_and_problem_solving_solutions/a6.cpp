#include <iostream>
using namespace std;

struct stFullName {
    string FirstName;
    string LastName;
};

stFullName ReadName(){
    stFullName Name;
    cout << "Enter Your First Name: ";
    cin >> Name.FirstName;
    cout << "Enter Your Second Name: ";
    cin >> Name.LastName;

    return Name;
}

string GetFullName(stFullName Name){
    return Name.FirstName + " " + Name.LastName;
}

void PrintFullName(string fullName){
    cout << "(:__-__:)" << endl;
    cout << "Welcome " << fullName << endl;
}
int main(){
    PrintFullName(GetFullName(ReadName()));
    return 0;
}