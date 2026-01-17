#include<iostream>
#include<string>

using namespace std;

int main(){

   string FavTea ;
   int NumofTea;

   cout<<"Enter Tea Name : ";
   getline(cin,FavTea);

   cout<<"Enter Number of tea : ";
   cin>>NumofTea;

   cout<<endl<<"\t--- Tea Info In fun way ---\t\n"<<endl;
  
   cout<<"Name : "<<FavTea<<endl;
   cout<<"Total number of tea user want : "<<NumofTea<<endl;
   
   cout<<endl;

   cout<<"\t--Hello Friends Chai peelo--\t\n";

    return 0;
}