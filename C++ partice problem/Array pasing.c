#include<iostream>
using namespace std;
int display(string ar[] ,int a[],int size){
     for(int i=0;i<size;i++)
    {
        cout <<"Enter student" <<i+1<<"information="<<endl;
        cout<<"student name="<<endl;

        cout<<"student id="<<endl;

        cout<<endl<endl;

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
        cout <<"Enter student" <<i+1<<"information="<<endl;
        cout<<"student name="<<endl;
        cin>>ar[i];
        cout<<"student id="<<endl;
        cin>>a[i];
        cout<<endl<endl;

    }
    display(ar,a,n);
}
