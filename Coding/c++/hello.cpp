#include <iostream>
#include <string>

using namespace std;

void call(int a , string &msg ){

  // a += 5;

  if(a == 0){
    return;
  }

  cout<<a<<" "<<msg <<endl;

  call( a - 1,msg);
}

int main(){

 int b = 4;
 string msg = "kaise ho !";

 call(b,msg);

 cout<<b<<endl;

  return 0;
}
