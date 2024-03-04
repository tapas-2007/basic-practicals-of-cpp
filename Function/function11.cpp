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

int aoc(float r){
    cout<<"Enter the radius of circle = ";
    cin>>r;
    float A;
    A = 3.14 *  r * r;
    return A;
}

int aos(int l){
cout<<"Enter the length of square = ";
cin>>l;
int A = l * l;
return A;
}

int aor(int l, int b){
    cout<<"Enter the Length and breath of  the reactangle  = ";
    cin>>l>>b;
    int A = l * b;
    return A;
}

int vos(int l){
    cout<<"Enter the length of square = ";
    cin>>l;
    int V = l * l * l;
    return V;
}

int vor(int l,int b, int h){
    cout<<"Enter the length , breadth and height of rectangle = ";
    cin>>l>>b>>h;
    int V = l * b * h;
    return V;
}

int voc(int r){
    cout<<"Enter the radius of cylinder = ";
    cin>>r;
    int V = 3.14 * r * r;
    return V;
}

int voC(int r , int h){
    cout<<"Enter  the radius and height of cone = ";
    cin>>r >>h ;
    int V = (1/3) * 3.14 * r * r * h;
    return V;
}

int csaoc(int r , int h ){
    cout<<"Enter the radius and height of curved  surface area of cylinder = " << endl;
    cin>>r,h;
    int  CSA= 2 * 3.14 * r * h;
    return CSA;
}

int aot(int b, int h){
    cout<<"Enter  base and height of triangle = "<<endl;
    cin>>b>>h;
    float A = 0.5 *  b  * h;
    return A;
}

int fa(int p){
    int n,sum=0;
    cout<<"Enter the value of the number = ";
    cin>>n;

    int plus[n];
    cout<<"enter the value = ";
    for(int i=0;i<n;i++){
        cin>>plus[i] ;
    }
    for(int i=0;i<n;i++){
        sum += plus[i];
    }
    cout<<"Sum =  "<<sum<<endl;
    float f = sum / n;
    return f;
}

int fact(int n){
    cout<<"Enter the value  of n = ";
    cin>>n;
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int pattern(int i, int j){
    menu:
    cout<<"1).  Rectangle"<<endl;
    cout<<"2).  Hollow rectangle"<<endl;
    cout<<"3).  inverted half pyramid"<<endl;
    cout<<"4).  half pyramid after 180degree rotation"<<endl;
    
}
int main(){
    int a,b,c,ch,d,l,h,p,n,i,j;
    float r;
    char x;
    menu:
    cout<<"1).  Addition"<<endl;
    cout<<"2).  Subtraction"<<endl;
    cout<<"3).  Multiplication"<<endl;
    cout<<"4).  Division"<<endl;
    cout<<"5).  Modulo"<<endl;
    cout<<"6).  Power"<<endl;
    cout<<"7).  Square root"<<endl;
    cout<<"8).  Determiners"<<endl;
    cout<<"9).  Area of Circle"<<endl;
    cout<<"10). Area of square"<<endl;
    cout<<"11). Area of rectangle"<<endl;
    cout<<"12). Volume of square"<<endl;
    cout<<"13). volume of rectangle"<<endl;
    cout<<"14). Volume of cylinder"<<endl;
    cout<<"15). Volume of cone"<<endl;
    cout<<"16). Curved Surface area of cylinder"<<endl;
    cout<<"17). Area of triangle"<<endl;
    cout<<"18). Find Average"<<endl;
    cout<<"19). Fint factorial of number"<<endl;
    cout<<"20). Pattern's"<<endl;
    cout<<"21). Exit"<<endl;
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
    cout<<aoc(r)<<endl;
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
    
    
    case 10:
    cout<<aos(l)<<endl;
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
    
    
    case 11:
    cout<<aor(l,b)<<endl;
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
    
    
    case 12:
    cout<<vos(l)<<endl;
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
    
    
    case 13:
    cout<<vor(l,b,h)<<endl;
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
    
    
    case 14:
    cout<<voc(r)<<endl;
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
    
    
    case 15:
    cout<<voC(r,h)<<endl;
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
    
    
    case 16:
    cout<<csaoc(r,h)<<endl;
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
    
    
    case 17:
    cout<<aot(b,h)<<endl;
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
    
    
    case 18:
    cout<<fa(p)<<endl;
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
    
    
    case 19:
    cout<<fact(n)<<endl;
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
    
    
    case 20:
    cout<<pattern(i,j)<<endl;
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
    
    
    case 21:
    system("cls");
    return 0;

    
    default:
    cout<<"Wrong Choice......Try  Again \n";
    system("cls");
    goto menu;
    }
}