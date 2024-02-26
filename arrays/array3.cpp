#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    string name[n];
    for(int i=0;i<n;i++){
        cin>>name[i];
    }
    
    for(int j=0;j<n;j++){
        cout<<name[j]<<" ";
    }
    return 0;
}