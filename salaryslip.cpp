#include<iostream>
#include<iomanip>
using namespace std;
class slip
{
    private:
    int ENO,UAN,basicpay,DA,HRA,EPF,gpay,totded,netpay,ptax;
    string name,dept,design,bankno,PAN,IFSC;
    public:
    void getdetails()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter employee number:";
        cin>>ENO;
        cout<<"enter department:";
        cin>>dept;
        cout<<"enter designation:";
        cin>>design;
        cout<<"enter pan:";
        cin>>PAN;
        cout<<"enter uan:";
        cin>>UAN;
        cout<<"enter bank no:";
        cin>>bankno;
        cout<<"enter basic pay:";
        cin>>basicpay;
        cout<<"enter ifsc code:";
        cin>>IFSC;
    }
    void calculate()
    {
        DA=basicpay/100*80;
        HRA=basicpay/100*10;
        EPF=(basicpay+DA)/100*12;
        ptax=basicpay/100*2;
        gpay=basicpay+DA+HRA;
        totded=EPF+ptax;
        netpay=gpay-totded;
    }
    void display()
    {
        cout<<"PAYSLIP"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Employee Number:"<<ENO<<endl;
        cout<<"Department:"<<dept<<endl;
        cout<<"Designation:"<<design<<endl;
        cout<<"PAN no:"<<PAN<<endl;
        cout<<"UAN no:"<<UAN<<endl;
        cout<<"BANK no:"<<bankno<<endl;
        cout<<"BASIC PAY:"<<basicpay<<endl;
        cout<<"IFSC Code:"<<IFSC<<endl;
        cout<<"Daily Allowance:"<<DA<<endl;
        cout<<"House Rent Allowance:"<<HRA<<endl;
        cout<<"Employee Provident Fund:"<<EPF<<endl;
        cout<<"Professional Tax:"<<ptax<<endl;
        cout<<"Gpay:"<<gpay<<endl;
        cout<<"Total Deduction:"<<totded<<endl;
        cout<<"NET PAY:"<<netpay<<endl;
    }
};
int main()
{
    slip s;
    s.getdetails();
    s.calculate();
    s.display();
}