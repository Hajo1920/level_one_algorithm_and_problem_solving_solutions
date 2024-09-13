
#include<iostream>
#include <cmath>

using namespace std;

enum enMark { Pass=1, Fail=0};

int ReadMark(){
    int Mark;
    cout << "How much mark did you got ? ";
    cin >> Mark;

    return Mark;
}

enMark CheckMark(int Mark){

    if(Mark >= 50) return enMark::Pass;
    else return enMark::Fail;
}

void PrintMarkResult(int result){
    if(CheckMark(result) == enMark::Pass)  cout << "You Passed !" << endl;
    else cout << "You Failed !" << endl;
}

int main(){
  

   PrintMarkResult(ReadMark());

	return 0;
}