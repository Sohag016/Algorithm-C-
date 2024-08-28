#include<iostream>
using namespace std;
class car{
    public:

 string name ;
 int id ;
 int  total_id ;
};
int main()
{
    car obj1;
    obj1.name ="sohag ";
    obj1.id=16;
    obj1.total_id =4000;
    cout <<"Enter car number 1="<<endl;
    cout<<"car Name="<<obj1.name<<endl;
    cout<<"car id="<<obj1.id<<endl;
    cout<<"car total_id="<<obj1.total_id<<endl;


    car obj2;
    obj2.name ="sohag";
    obj2.id=16;
    obj2.total_id =4000;
    cout <<"Enter car number 2="<<endl;
    cout<<"car Name="<<obj2.name<<endl;
    cout<<"car id="<<obj2.id<<endl;
    cout<<"car total_id="<<obj2.total_id<<endl;

}
