// check x,y,z is pythagoren triplet or not by using fuction.
#include<iostream>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x , max(y,z));
    int b, c;

    if(a == x){
        b = y;
        c = z;
    } else if (a == y) {
        b = z;
        c = x;
    } else {
        b = x;
        c = y;
    }

    return ((b*b + c*c == a*a)? true : false);  
} 

int main(){
    int x,y,z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    
    if(check(x, y, z))
        cout << "Given values are Pythagorean triplet";
    else
        cout << "Given values are not Pythagorean triplet";

    return 0;
}
