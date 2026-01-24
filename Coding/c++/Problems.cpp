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

 for(int i = 0; i<= num; i++){
    cout<<i<<endl;
 }

    return 0;
}