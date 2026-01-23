#include <iostream>
#include <string>

using namespace std;

int main(){

 int Tea;

 cout<<"enter number of teas : ";
 cin>>Tea;

 cout<<"\n----Served cups of tea----\n";

 while (Tea > 0){
  cout<<"\n---cup of Tea Served---\n";
   Tea--;
   cout<<"Reamaining cups : "<<Tea;
   
 }

  cout<<"\n\n---all teas cups are served----\n";

  return 0;
}