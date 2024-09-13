#include<iostream>
#include<cmath>


using namespace std;

struct stDurations {int Day, Hour, Minute, Seconds;};

int ReadPostiveNumber(string message){
  int Number = 0;
  do{
    cout << message << ": ";
    cin >> Number;

  }while(Number < 0);

  return Number;
}

stDurations ReadDutations(){
  stDurations Duration;

  Duration.Seconds = ReadPostiveNumber("Enter number of seconds");

  return Duration;
}

void PrintDurationResult(stDurations Duration){
  const int SecondsPerDay = 24 * 60 * 60;
  const int SecondsPerHour = 3600;
  const int SecondsPerMinute = 60;

  int Reminder = 0;
  Duration.Day = Duration.Seconds / SecondsPerDay;
  Reminder = Duration.Seconds % SecondsPerDay;
  Duration.Hour = Duration.Seconds / SecondsPerHour;
  Reminder = Reminder % SecondsPerHour;
  Duration.Minute = Duration.Seconds / SecondsPerMinute;
  Reminder = Reminder % SecondsPerMinute;
  Duration.Seconds = Reminder;

  cout << endl;
  cout << Duration.Day<< " Days : "<< Duration.Hour<< " Hours : "<< Duration.Minute << " Minutes : "<< Duration.Seconds << " Seconds" << endl;
  
}

int main() {
  PrintDurationResult(ReadDutations());

  return 0;
}
