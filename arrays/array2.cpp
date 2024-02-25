// how many student insert by user and add their age.
#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    int age[n];

    for(int i=0;i<=n;i++){
        cin>>age[i];
    }

    cout<<"this is your age list = ";
    for(int j=0;j<=n;j++){
        cout<<age[j]<<" ";
    }

    return 0;
}