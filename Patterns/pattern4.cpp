//half pyramid after 180degree rotation.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number of row = ";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for(int j=1; j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}