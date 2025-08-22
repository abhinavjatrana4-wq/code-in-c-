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

 if(a>b){
    if(a>c){
        cout<<"a is the greaest ";
    }
    else{
        cout<<"c is greatest ";
    }
 }
 else{
    if(b>c){
        cout<<"b is greatest ";
    }
    else{
        cout<<"c is greatest ";

    }
 }
}

