#include<iostream>
using namespace std ;

void usa(){
    cout<<"you are in usa \n ";
}
void india(){
    cout<<"you are in india \n";
     usa();
}
int main(){

india();
}