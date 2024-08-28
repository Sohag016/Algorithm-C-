#include<iostream>
using namespace std;
 class A{

 public:
     void print (int i){

     cout <<"sohag"<<endl;
     }

 };
 int main()
 {
     A obj[50];
     for(int i=1;i<=50;i++)
     {
         obj[i].print (1);
     }
     return 0;
 }
