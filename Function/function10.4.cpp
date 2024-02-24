//covert decimal to octal by using function.
#include<iostream>
using namespace std;

int dto(int n){
int x =1;
int ans = 0;
while(x <= n){
    x*=8;
}
x/=8;
while(x>0){
    int lastDigit =  n/x;
    n -= lastDigit*x;
    ans = ans*10 + lastDigit;
}
return ans;
}

int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    cout<<dto(n)<<endl;

    return 0;
}