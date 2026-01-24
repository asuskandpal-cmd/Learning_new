#include <iostream>
#include <string>

using namespace std;
//Recursion
void HW(int n);//function declaration

int fact(int n){

  if(n == 0){
    return 1;
  }

  return n * fact(n-1);
}

int main(){

  HW(5);

  cout<<"\n"<<fact(6)<<endl;

  return 0;
}
void HW(int n){//function defination

  if(n == 0){//Base case
    return;
  }
  HW(n-1);

  cout<<n<<" hello world\n";
   
}