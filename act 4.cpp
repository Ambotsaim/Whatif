#include<iostream>
using namespace std;

int main()
{
    int Number;
    cout << "Enter a Number:";
    cin >> Number;
    
    if(Number %3 ==0 && Number % 9 ==0){
    cout << "Number" "is divisible by 3,7 and 9:" <<endl;
    }
    else {
    cout << "Number" "is not divisible by 3,7 and 9:" <<endl;
    }
    
    return 0;
}





















    