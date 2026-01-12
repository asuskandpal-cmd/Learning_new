#include <stdio.h>

void printHW(int n){

  int count  = n;
 if(n == 0){
  return;
 }
 
 printf("%d Hello world !\n ",count);

 printHW(n-1);
    
}

int main() {
   
  printHW(5);

    return 0;
}