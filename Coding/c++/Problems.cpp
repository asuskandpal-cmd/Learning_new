#include<iostream>
#include<string>

using namespace std;

int main(){

  int num ;

  cout<<endl<<"Enter any positive nummber : ";
  cin>>num;

  if(num < 0){
  cout<<"this is not a positive number";
  
  }

 if(num%2 == 0){
    cout<<"the number is even \n";
 }else{
    cout<<"the number is odd \n";
 }

    return 0;
}