#include<iostream>
using namespace std ; 

int main(){
    int a , b, c ;
    cout<<"enter the number 1";
    cin>>a;
    cout<<"enter the number 2";
    cin>>b;
    cout<<"enter the number 3";
    cin>>c;

    if(a >b && a>c ){
        cout<<"a is grater";
    }
    else if(b>a && b>c ){
        cout<<"b is grater";
    }
    else{
        cout<<"c is grater ";
    }
}

