#include <iostream>
#include <string>
using namespace std;
 class A{

  private:
      string name ="sohag";
      friend void display(A & display);

 };
void display (A & display){
    display.name;

   cout <<"My name is "<<display.name<<endl;
}

   int main(){
   A obj;
   display(obj);
   return 0;

   }
