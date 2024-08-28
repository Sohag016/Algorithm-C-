#include<iostream>
using namespace std;
int displayArr(int ar[],int size)
{
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int ar[10];
    for(int i=0;i<10;i++)
    {
        cin>>ar[i];
    }
    displayArr(ar,10);
}
