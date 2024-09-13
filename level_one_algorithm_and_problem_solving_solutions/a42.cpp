
#include<iostream>
#include <cmath>

using namespace std;
struct stTaskDuration {int Days, Hours, Minutes, Second;};

int ReadPostiveNumbers(string Message){

	int Number = 0;
	
	do{
		cout << Message;
	    cin >> Number;
	}while (Number <= 0);

	return Number;

}

stTaskDuration ReadTaskDuration(){
	stTaskDuration TaskDuration;
	TaskDuration.Days = ReadPostiveNumbers("Please Enter Number of Days ");
	TaskDuration.Hours = ReadPostiveNumbers("Please Enter Number of Hours ");
	TaskDuration.Minutes = ReadPostiveNumbers("Please Enter Number of Minutes ");
	TaskDuration.Second = ReadPostiveNumbers("Please Enter Number of Second ");

	return TaskDuration;
	
	}

int TotalSecond(stTaskDuration TaskDuration){
	int DurationInSecond = TaskDuration.Days * 60 * 60 * 24;
	    DurationInSecond += TaskDuration.Hours * 60 * 60;
		DurationInSecond += TaskDuration.Minutes * 60;
		DurationInSecond += TaskDuration.Second;
	 
	 return DurationInSecond;
}

int main(){

int seconds  = TotalSecond(ReadTaskDuration());
	cout << "Total Second: " << seconds << endl;


	return 0;
}
