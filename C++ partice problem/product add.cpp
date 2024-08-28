#include<iostream>
using namespace std;
display(int ar[],int size)
{
    int add=0;
    for(int i=0;i<size;i++)
    {
        add=add+ar[i];
    }
    cout<<"Total number"<<add<<endl;
}
 int main()
 {
     int n;
     cout<<"Enter any   number=";
     cin>>n;
     int ar[n];
     cout<<"Enter price=";
     for(int i=0;i<n;i++)
     {

         cin>>ar[i];

     }
     display(ar,n);
 }
