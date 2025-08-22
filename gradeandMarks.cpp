#include<iostream>
using namespace std;

int main (){
    int n ;
    cout<<"enter the marks ";
    cin>>n;

    if(n>81 && n<100 ){
        cout <<"very good ";
    }
    if(n>61 && n<80 ){
        cout <<" good ";
    }
    if(n>41 && n<60 ){
        cout <<" average ";
    }
    if(n>0 && n<40 ){
        cout <<"fail";
    }
    else{
        cout<<"not a valid input ";
    }
}