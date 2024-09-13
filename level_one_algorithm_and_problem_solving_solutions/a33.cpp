
#include<iostream>
#include <cmath>

using namespace std;

short ReadMark(short Mark){
    do{
        cout << "Write your mark from 0 - 100: " << endl;
        cin >> Mark;
    }while(Mark <= 0 || Mark > 100);

    return  Mark;
}


string CompareGradeToMark(int Mark){
    if(Mark >= 90){
        return "A";
    }else if (Mark >= 80 && Mark < 89){
       
        return "B";
    }else if (Mark >= 70 && Mark < 79){
       
        return "C";
    }else if (Mark >= 50 && Mark < 69){
       
        return "D";
    }else{
        return "F";
    }
}

void PrintResult(string result){
    if(result == "F") cout << "Your Mark is " << result << " [ You Failed ]" << endl;

    else cout << "Your Mark is " << result << " [ You passed ]" << endl;

}

int main(){

    short Mark;
    PrintResult(CompareGradeToMark(ReadMark(Mark)));
	return 0;
}