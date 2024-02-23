#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your age";
    cin>>a;
    if (a >=18)
    {
        cout<<"u are adult";
    }
    else if(a >=10){
        cout<<"u are teenage";
    }
    else{
        cout<<"u are not a adult";
    }
}