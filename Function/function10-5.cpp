//covert decimal to hexadecimal by using function.
#include<iostream>
using namespace std;

string dth(int n){
   int x =1;
   string ans = "";
   while (x <= n) { 
    int lastDigit = n/x;
    n-=lastDigit;
    x/=16;
    if(lastDigit <= 9){
        ans = ans + to_string(lastDigit);
    }else{
        char c = 'A' + lastDigit - 10;
        ans.push_back(c);
    }
   }
   return ans;
}

int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    cout<<dth(n)<<endl;

    return 0;
}