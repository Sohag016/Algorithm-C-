#include<iostream>
using namespace std;
int add (int x,int y ){
cout <<"two value="<<x+y<<endl;
}
int add (int x,int y, int z)
{
    cout<<"three"<<(x+y+z)/3;
}

int main()
{
    add(10,20);
    add(20,10,45);
    return 0;
}
