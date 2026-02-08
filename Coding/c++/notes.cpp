#include<iostream>
#include<vector>

using namespace std;

//class
class Student{
  private:
  int marks;

  public:
    vector<string>Names;

  void PrintInfo(){
  cout<<"\n---Students who got 90---\n";
 
    for(string Name : Names){
      cout<<"Name : "<<Name<<endl;
    }
  }

  void setMarks(int m){
    marks = m;
  }

  // int getMarks( ){
  //   return marks;
  // }

  void getMarks(){
    cout<<"Marks : "<<marks<<endl;
  }
};

int main(){

 Student S1;

 S1.setMarks(25000);
 S1.Names = {"himesh","Karan","bagla"};

 S1.PrintInfo();

 S1.getMarks();



  
   
   

    return 0;
}