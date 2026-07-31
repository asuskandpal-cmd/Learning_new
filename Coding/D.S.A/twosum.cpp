#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int size =  sizeof(arr) / sizeof(int) ;

    int Num;

    cout<<"\n enter Num : ";
    cin>>Num;

    int Ans;

   for(int i = 0 ; i < size ; i++){

       for(int j = i; j < size ; j++){
           Ans = arr[i] + arr[j];

           if(Ans == Num){
               cout<<"\n arr["<< i << "] + arr [" << j << "] = "<< Ans <<endl;
               cout << endl;
               break;
           }
       }
       if(Ans == Num){break;}
   }

    }
