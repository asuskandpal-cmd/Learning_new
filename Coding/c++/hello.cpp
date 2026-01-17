#include <iostream>
#include <string>

using namespace std;

int main(){

 string UserName ;
 string Details = "himesh bhai \"crazy\" hai";

 cout<< "Bhai apka Naam kya hai : ";
 getline(cin,UserName); 
 
//  getline is used to store multiple sentences instead of one
// cin is good for storing single character

//string Name = "Himesh\t";
 
//   string Description = "kasie ho \"bhai\" ji";

  

//   float coffeePrice = 49.99;
//   int TotalCoffeePrice = (int) coffeePrice;
 
//  cout<<TotalCoffeePrice<<endl;
//  cout<<Name<<Description<<endl;

 cout<< "UserName : "<<UserName<<endl;
 cout<< "Details : "<<Details;
  
  return 0;
}