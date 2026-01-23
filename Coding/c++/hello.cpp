#include <iostream>
#include <string>

using namespace std;

int main(){

  string Teacups;
   
  for(int i = 0; i < 3;i++){
    cout<<"\nEnter Tea : ";
    getline(cin,Teacups);
    for(int j = 1; j <= 3;j++){
      cout<<j<<" brewing "<<Teacups<<endl;
    }
  }

  return 0;
}