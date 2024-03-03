#include<iostream>
#include <stdlib.h>
#include<math.h>
using namespace std;
int add(int a , int b ,int c){
    cout<<"Enter value of a and b = ";
    cin>>a >>b ;
    c=a+b;
    return c;
}
int sub(int a,int b,int c){
    cout<<"Enter value of a and b = ";
    cin>>a >>b ;
    c=a-b;
    return c;
}
int mul(int a,int b,int c){
    cout<<"Enter value of a and b = ";
    cin>>a >>b ;
    c=a*b;
    return c;
}
int div(int a,int b,int c){
    cout<<"Enter value of a and b = ";
    cin>>a >>b ;
    c=a/b;
    return c;
}
int mod(int a,int b,int c){
    cout<<"Enter value of a and b = ";
    cin>>a >>b ;
    c=a%b;
    return c;
}
int pow(int a,int b,int c){
    cout<<"Enter the value of number = ";
    cin>>a;
    cout<<"Enter the vaue of power = ";
    cin>>b;
    c=pow(a,b);
    return c;
}
int main(){
    int a,b,c,ch;
    char x;
    menu:
    cout<<"1). Addition"<<endl;
    cout<<"2). Subtraction"<<endl;
    cout<<"3). Multiplication"<<endl;
    cout<<"4). Division"<<endl;
    cout<<"5). Modulo"<<endl;
    cout<<"6). Power"<<endl;
    cout<<"7). Exit"<<endl;
    cout<<endl;
    cout<<"Enter the choice = ";
    cin>>ch;

    switch (ch)
    {
    case 1:
    cout<<add(a,b,c);
    cout<<endl;
    cout<<"Choise y for continue or n for  exit : ";
    cin>>x;
        if(x=='y' || x=='Y'){
            system("cls");
            goto menu;
        }
        else{
            system("cls");
            return 0;
        }
       

    case 2:
    cout<<sub(a,b,c);
    cout<<endl;
    cout<<"Choise y for continue or n for  exit : ";
    cin>>x;
        if(x=='y' || x=='Y'){
            system("cls");
            goto menu;
        }
        else{
            system("cls");
            return 0;
        }

    case 3:
    cout<<mul(a,b,c);
    cout<<endl;
    cout<<"Choise y for continue or n for  exit : ";
    cin>>x;
        if(x=='y' || x=='Y'){
            system("cls");
            goto menu;
        }
        else{
            system("cls");
            return 0;
        }
    
    case 4:
    cout<<div(a,b,c);
    cout<<endl;
    cout<<"Choise y for continue or n for  exit : ";
    cin>>x;
        if(x=='y' || x=='Y'){
            system("cls");
            goto menu;
        }
        else{
            system("cls");
            return 0;
        }
          
    case 5:
    cout<<mod(a,b,c);
    cout<<endl;
    cout<<"Choise y for continue or n for  exit : ";
    cin>>x;
        if(x=='y' || x=='Y'){
            system("cls");
            goto menu;
        }
        else{
            system("cls");
            return 0;
        }    
    
    case 6:
    cout<<pow(a,b,c);
    cout<<endl;
    cout<<"Choise y for continue or n for  exit : ";
    cin>>x;
        if(x=='y' || x=='Y'){
            system("cls");
            goto menu;
        }
        else{
            system("cls");
            return 0;
        }
    
    case 7:
    system("cls");
    return 0;

    default:
    cout<<"Wrong Choice......Try  Again \n";
    system("cls");
    goto menu;
    }
}