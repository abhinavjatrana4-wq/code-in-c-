#include<iostream>
using namespace std ;

void swap(int& a , int& b ){
    int temp = a ; 
    a = b ;
    b = temp ;

}

int main(){
    int a ;
cout<<"enter the number a : ";
cin>>a;
 int b ;
cout<<"enter the number b : ";
cin>>b ;
swap(a,b);
cout<<a<<endl;
cout<<b<<endl ;
}