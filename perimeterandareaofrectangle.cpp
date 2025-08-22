#include<iostream>
using namespace std ; 

int main(){
    int length ; 
    cout<<"enter the length ";
    cin>>length;

    int breath ;
    cout<<"enter the breath ";
  cin>>breath;

  int area = length * breath ;

  int perimeter = 2*(length + breath);

  if(perimeter > area ){
    cout<<"perimeter is grater then area ";
  }
  else if (area > perimeter ){
    cout<<"area is greater then perimeter ";
  }
  else{
    "both are equal ";
  }

}