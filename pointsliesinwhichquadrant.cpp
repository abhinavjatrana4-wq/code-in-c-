#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the number";
    cin>>n;
    int m;
    cout<<"enter the second number ";
    cin>>m;

    if(n>0 && m>0){
        cout<<"first quadrant ";

    }
    else if (n<0 && m>0){
        cout<<"second quadrant ";
    }
     else if (n<0 && m<0){
        cout<<"second quadrant ";
    }
    else{
        "fourth  quadrant ";
    }
}