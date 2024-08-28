#include<iostream>
using namespace std;
class  account{
private:
    double balance;
string accName ,acctype;
public:
    account (double amount ,string name, string type){
    balance = amount ;
    accName = name;
    acctype=type;


    cout<<"Account Name= "<<accName<<endl;
    cout<<"Account Type= "<<acctype<<endl;
    cout<<"Initial Balance="<<balance<<endl;
    }
    void deposite(double amount){
    if(amount>0){
            balance+=amount;
    }
    }
    void withdraw(double amount){
    if(amount>0 && amount <=balance){
            balance -=amount;
    }
    }
    double getbalance(){
    return balance;}

    };
    int main()
    {
        account a1(5000 ,"sohag","job");
        a1.deposite(1000);
         cout<<"Total Balance= "<< a1.getbalance()<<endl;
        a1.withdraw(6000);
       cout<<"Current Balance= "<< a1.getbalance()<<endl;

        cout<<"\n-------------------------------------\n";
         account a2(500 ,"raihan","student");
        a2.deposite(1000);
         cout<<"Total Balance= "<< a2.getbalance()<<endl;
        a2.withdraw(600);
        cout<<"Current Balance= "<< a2.getbalance()<<endl;
        return 0;

    }
