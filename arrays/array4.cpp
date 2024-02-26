// linear search key in array.
#include <iostream>
using namespace std;

int linearSearch(int num[], int n, int key) { 
    for(int i=0;i<n;i++){
        if(num[i] == key){
        return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int key;
    cin>>key;

    cout<<linearSearch(num,n,key)<<endl;
    return 0;
}