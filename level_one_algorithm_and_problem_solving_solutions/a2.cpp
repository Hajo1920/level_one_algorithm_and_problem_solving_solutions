#include <iostream>
using namespace std;
string ReadName(){
    string name;
    cout << "Please Enter your name: ";
    getline(cin, name);

    return  name;
}

void PrintName(string name){
    cout << "It's my pleasure to meet you "<< name << endl;
}
int main(){
    PrintName(ReadName());
    return 0;
}