#include<iostream>
using namespace std;


int main(){
    int n ;
    cin>>n;
int a =0;
for(int i = n ; i != 0 ; i-- ){
    n = n/10 ; 
    a--;}
cout<<a;
}