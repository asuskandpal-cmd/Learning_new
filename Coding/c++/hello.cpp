#include <iostream>

using std :: cout;
using std :: endl;
// using namespace std;

int main(){

  int x  = 4;
  x = 1;

  const int i = 10;

  for(int i=1; i<=5; i++){
    cout<<i<<endl;
  }
  

  std::cout<<"hello world !" << endl; 
  cout<<x<<endl;
  cout<<i;

  return 0;
}