#include<iostream>
using namespace std ;

int main(){
    int a ;
    cout<<"enter the number ";
    cin>>a;
     int b ;
    cout<<"enter the number ";
    cin>>b;

    int temp = a;
    a = b;
    b = temp;
    cout<<a<<endl ;
    cout<<b<<endl ;


}