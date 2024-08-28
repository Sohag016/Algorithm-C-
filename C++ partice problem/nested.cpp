#include<iostream>
using namespace std;
class A{
public:
    int l,w,a,r;
    void area(){
    cout<<"Enter choice length and weight=";
    cin>>l>>w;
    a=l*w;
    cout <<"area="<<a<<endl;
    }
    void rectangle(){
    //cout<<"Enter any choice length and weight =";
    r=2*(l+w);
    cout<<"rectangle="<<r<<endl;
        }
        void nested ()
        {
            area();
            rectangle();
        }

};
int main()
{
    A obj;
    obj.nested( );
    return 0;
}
