// Calculate nCr by using function.

// nCr = n!/(r!(n-r)!)  
#include <iostream> 
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int ans = fact(n)/(fact(r)*fact(n - r));
    cout << "\nnCr = " << ans;
}