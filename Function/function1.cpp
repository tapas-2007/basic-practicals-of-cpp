//Create a simple ADDTION function and how to call it .
#include<iostream>
using namespace std;

int add(int num1, int num2){ //-------|
    int sum = num1 + num2;   //       |-->function creating point
    return sum;              //-------|  
}

int main(){
    int a,b;
    cout<<"Enter value of a and b = ";
    cin>>a>>b;

    cout<<add(a,b)<<endl; //|--> Function calling by using function name.
    return 0;
}