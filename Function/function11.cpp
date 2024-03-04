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
int Det(int a,int b,int c,int d){
int x,D,e,f,g,h,i;
a:
cout<<"Choise 1 for 2d determiner and 2 for 3d determiner = ";
cin>>x;
if (x==1) {
cout<<"D= | a b |"<<endl;
cout<<"   | c d |"<<endl;
cout<<"Enter Value for a,b,c & d = ";
cin>>a>>b>>c>>d;
D = (a * d) - (b * c);
return D;
}
else if (x==2) {
cout<<"D= | a b c |"<<endl;
cout<<"   | d e f |"<<endl;
cout<<"   | g h i |"<<endl;
cout<<"Enter Value for a,b,c,d,e,f,g,h,i = ";
cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
D=(a*e*i)+(b*d*h)+(c*g*f)-(d*e*h)-(f*g*c)-(i*d*e);
return D;
}
else{
    goto a;
}
}
int main(){
    int a,b,c,ch,d;
    char x;
    menu:
    cout<<"1). Addition"<<endl;
    cout<<"2). Subtraction"<<endl;
    cout<<"3). Multiplication"<<endl;
    cout<<"4). Division"<<endl;
    cout<<"5). Modulo"<<endl;
    cout<<"6). Power"<<endl;
    cout<<"7). Square root"<<endl;
    cout<<"8). Determiners"<<endl;
    cout<<"9). Exit"<<endl;
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
    cout<<"Enter  the value of a = ";
    cin >> a ;
    cout<<sqrt(a)<<endl;
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
    
    case 8:
    cout<<Det(a,b,c,d)<<endl;
    cout<<endl;
    cout<<"Choise y for continue or n for exit :";
    cin>>x;
    if(x=='y'||x=='Y'){
        system("cls");
        goto menu;
    }else {
        system("cls");
        return 0;
    }

    case 9:
    system("cls");
    return 0;

    default:
    cout<<"Wrong Choice......Try  Again \n";
    system("cls");
    goto menu;
    }
}