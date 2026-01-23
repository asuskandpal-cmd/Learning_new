#include <iostream>
#include <string>

using namespace std;

int main(){

 int choice;
 double price;

 cout<<"select your tea\n";
 cout<<"1. Green tea\n";
 cout<<"2. Black tea\n";
 cout<<"3. Masala tea\n";
 cout<<"enter choice of number : ";

 cin>>choice;

 cout<<"\n---The Price of Tea---\n";

 switch (choice){ 
  case 1 :
    price = 2.99;
    cout<<"The Greem tea Price : "<<price<<endl;
   break;
 
  case 2 :
   price = 3.99;
   cout<<"The Price of Black tea : "<<price<<endl;
   break;
   
  case 3 :
   price = 4.99;
   cout<<"The Price of Masala tea : "<<price<<endl;
   break;

  defaut:
   cout<<"error"<<endl;

 }


  
  return 0;
}