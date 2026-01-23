#include <iostream>
#include <string>

using namespace std;

int main(){

  string choice ;

 while(true){

  cout<<"do you want more tea : ";
  cin>>choice;

  if(choice == "stop"){
    break;
  }
  
  cout<<"tea is served"<<endl;
 }
    cout<<"no more tea served";
    
  return 0;
}