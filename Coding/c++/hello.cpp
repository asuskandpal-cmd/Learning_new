#include <iostream>
#include <string>

using namespace std;

void fib(int a, int b, int n){

  if(n == 0){
   return;
  }

  cout<<a<<" ";
  fib(b,a+b,n-1);

}

int fib(int n){

  if(n <= 1){
    return n;
  }

  return fib(n-1) + fib(n-2);

}


int main(){

  cout<<fib(6)<<endl;
  fib(0,1,7);
  
  return 0;
}
