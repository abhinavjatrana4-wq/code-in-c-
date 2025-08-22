#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    cout<<"enter the side 1 ";
    cin>>a;
cout<<"enter the side 2 ";
    cin>>b;
cout<<"enter the side 3 ";
    cin>>c;

    if(a+b>c && b+c>a && a+c>b ){
        cout<<"it is a triangle ";
    }
    else{
        cout<<"not a triangle ";
    }


}