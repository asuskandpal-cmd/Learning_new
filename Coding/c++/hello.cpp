#include <iostream>

using std :: cout;
using std :: endl;
// using namespace std;

int main(){

  int x  = 4;
  x << 1;

  const int i = 10;
  i << 2;

  std::cout<<"hello world !" << endl; 
  cout<<x<<endl;
  cout<<i;

  return 0;
}