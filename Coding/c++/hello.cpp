#include <iostream>
#include <string>

using namespace std;

int main(){

 int Tea;

 cout<<"enter number of teas : ";
 cin>>Tea;

 cout<<"\n----Served cups of tea----\n"<<endl;

 while (Tea > 0){
  cout<<"Served cup of Tea : "<<Tea<<endl;
   Tea--;
   
 }

  cout<<"\n---all teas are served----\n";

  return 0;
}