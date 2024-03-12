#include<iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter a positive integer: ";
   cin >> num;
   for(int i = 2; i <= num; i++) {
       if(num % i == 0) {
           cout << "Number is not prime" << endl;
           return 0;
       }
   }
   cout << "Number is prime" << endl;
   return 0;
}