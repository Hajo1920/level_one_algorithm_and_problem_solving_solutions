
#include<iostream>
#include <cmath>

using namespace std;
void ReadSales(int& TotalSales){
    
    cout << "Write your TotalSales? " << endl;
    cin >> TotalSales;

}

int CalculateCommision(int TotalSales){
     if(TotalSales >= 1000000){
        return TotalSales*0.01;
    }else if (TotalSales >= 500000 && TotalSales < 1000000 ){
       
        return TotalSales*0.02;
    }else if (TotalSales >= 100000 && TotalSales < 500000){
       
        return TotalSales*0.03;
    }else if (TotalSales >= 50000 && TotalSales < 100000){
       
        return TotalSales*0.05;
    }else{
        return 0;
    }
  
}

void PrintCommisionPercentage(int result, int TotalSales){
    if(result == 0) cout << "No Commision" << endl;
    else cout << "Commision Percentage = " << (float)result/TotalSales << endl;
}

void PrintCommisionResult(int result){
    if(result == 0) cout << "Your total sales is not eligble for commision yet" << endl;
    else cout << "You will get commision of " << result << endl;
}

int main(){
    int TotalSales;
    ReadSales(TotalSales);
    PrintCommisionPercentage(CalculateCommision((TotalSales)), TotalSales);
    PrintCommisionResult(CalculateCommision((TotalSales)));

	return 0;
}