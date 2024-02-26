#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of student = ";
    cin>>n;

    string name[n];
    int age[n];
    for(int i=0;i<n;i++){
        cin>>name[i]>>age[i];
    }
    
    for(int j=0;j<n;j++){
        cout<<"Name ="<<name[j]<<" ";
        cout<<"Age ="<<age[j]<<" "<<endl;
    }
    return 0;
}