#include<iostream>
using namespace std;
class A{
public:
    int choice,result;
    void option(){
        cout<<"<< My calculator Four Option>>";
        cout<<endl<<endl;
        cout<<endl<<"Enter 1 of Summation";
        cout<<endl<<"Enter 2 of Subtraction";
        cout<<endl<<"Enter 3 of multiplication";
        cout<<endl<<"Enter 4 of division";
        cout<<endl<<"Enter 0 of Exit";
        cout<<endl<<endl;
        cout<<endl<<"please choice your option NO=>";
        cin>>choice;

    }
    void calculate(){
    switch(choice)
    {
    case 1:{
        int i,n,sum=0;
        cout<<"Number of summation NO = ";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<"Summation="<<sum<<endl;
    break;
    }
    case 2:{
        int num1,num2,result;
        cout<<"Enter given two number = ";
        cin>>num1>>num2;
        if( num1>num2){
            result=num1-num2;
        cout<<" Subtraction= "<<result;
        }
        else{
            result=num2-num1;
            cout<<"Subtraction= -"<<result;
        }
            break;}
    case 3:{
        int i,n,mul=1;
        cout<<"Number of Multiplication NO = ";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mul*=a[i];
        }
        cout<<"multiplication=  "<<mul<<endl;
    break;}
     case 4:{
        int num1,num2,result;
        cout<<"Enter given two number = ";
        cin>>num1>>num2;
        result=num1/num2;
        cout<<"division=  "<<result<<endl;
        break;
     }
     default:
        break;
    }
    }
 };
 int main()
 {
     A obj;
     obj.option();
     obj.calculate();
 }

