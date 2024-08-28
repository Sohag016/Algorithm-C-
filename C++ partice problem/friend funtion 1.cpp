#include<iostream>
#include<string.h>
using namespace std;
 class A{

 int Id;
 string name,program;
 public:
     void input(){
      cout <<"please give me Name =";
      cin>>name;
      cout <<"please give me  Program=";
      cin>>program;
      cout<<"Enter any Id=";
      cin>>Id;

     }
     friend void display (A &display);

 };

 void display (A &display){
    display.name;
    display.program;
    display.Id;
    cout<<endl<<"Name=   "<<display.name<<endl;
    cout <<"program=   "<<display.program<<endl;
    cout<< "Id=    "<<display.name<<endl;

 }
 int main()
 {
     A obj;
     obj.input();
     display(obj);
 }
