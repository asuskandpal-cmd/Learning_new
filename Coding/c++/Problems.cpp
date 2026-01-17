#include<iostream>
#include<string>

using namespace std;

int main(){

   string TeaName ;
   float TeaPrice;
   float FinalPrice;

   cout<<"Enter Chai name : ";
   getline(cin,TeaName);

   cout<<"Enter Base Price : ";
   cin>>TeaPrice;

   FinalPrice = TeaPrice + (TeaPrice*0.10);
   int RoundedPrice = (int)FinalPrice;

   cout<<endl<<"--- Tea Information ---"<<endl;
   cout<<endl;

   cout<<TeaName<<endl;
   cout<<"User Base Price : "<<TeaPrice<<endl;
   cout<<"Final Rounded Price : "<<RoundedPrice<<endl;

    return 0;
}