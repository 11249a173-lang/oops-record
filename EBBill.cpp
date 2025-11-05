#include<iostream>
#include<iomanip>
using namespace std;
class EBBill
{
    private:
    int customerID,units;
    char customername[50],address[50];
    float amount;
    public:
    void getbilldetails();
    void calculatebill();
    void displaybill();
};
void EBBill :: getbilldetails()
{
    cout<<"enter customer id:";
    cin>>customerID;
    cout<<"enter customer name:";
    cin>>customername;
    cout<<"enter address:";
    cin>>address;
    cout<<"enter units:";
    cin>>units;
}
void EBBill :: calculatebill()
{
    if(units<=100)
    amount=0;
    else if(units<=200)
    amount=(units-100)*2.25;
    else if(units<=400)
    amount=(100*2.25)+(units-200)*4.25;
    else if(units<=600)
    amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
    else
    amount=(100*2.25)+(200*4.25)+(400*6.25)+(units-600)*9;
}
void EBBill :: displaybill()
{
    cout<<"*********************************"<<endl;
    cout<<"--------Electricity Bill--------"<<endl; 
    cout<<"*********************************"<<endl;  
    cout<<left<<setw(20)<<"customerid"<<":"<<customerID<<endl;
    cout<<left<<setw(20)<<"Name "<<":"<<customername<<endl;
    cout<<left<<setw(20)<<"Address "<<":"<<address<<endl;
    cout<<left<<setw(20)<<"Units "<<":"<<units<<endl;
    cout<<left<<setw(20)<<"Amount "<<":"<<amount<<endl;
}
int main()
{
    EBBill B1;
    B1.getbilldetails();
    B1.calculatebill();
    B1.displaybill();
    return 0;
}