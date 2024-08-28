#include<iostream>
using namespace std;
int display(string ar[] ,int a[],int size){
    cout <<"<<RESULT>>"<<endl;
     for(int i=0;i<size;i++)
    {
          cout <<"Enter student " <<"information "<<i+1<<" >>"<<endl;
        cout<<"student name="<<ar[i]<<endl;

        cout<<"student id="<<a[i]<<endl;

         cout<<endl;


            }
            cout<<endl<<endl;

}
int main()
{
    int n;
    cout<< "Enter any student number number choice=";
    cin>>n;
    string ar[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout <<"Enter student " <<"information "<<i+1<<" >>"<<endl;
        cout<<"student name=";
        cin>>ar[i];
        cout<<"student id=";
        cin>>a[i];
        cout<<endl;

    }
    cout<<endl<<endl;

    display(ar,a,n);
}

