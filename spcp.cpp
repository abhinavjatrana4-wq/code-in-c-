#include<iostream>
using namespace std ; 


int main(){
int cp ;
cout<<"enter the cp ";
cin>>cp;
int sp ; 
cout<<"enter the sp ";
cin>>sp;
if(sp > cp){
cout<<"profit = "<<sp-cp;
}
else if(cp>sp){
    cout<<"loss = "<<cp-sp;
}
else{
    cout<<"no profit no loss ";
}
}