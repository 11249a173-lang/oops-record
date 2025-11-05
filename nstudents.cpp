#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdetails()
    {
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter 3 marks";
        cin>>m1;
        cin>>m2;
        cin>>m3; 
    }
    void calculate()
    {
        total=m1+m2+m3;
        avg=total/3;
    }
    void display()
    {
        cout<<left<<setw(20)<<"Roll no"<<":"<<rollno<<endl;
        cout<<left<<setw(20)<<"Name"<<":"<<name<<endl;
        cout<<left<<setw(20)<<"Mark 1"<<":"<<m1<<endl;
        cout<<left<<setw(20)<<"Mark 2"<<":"<<m2<<endl;
        cout<<left<<setw(20)<<"Mark 3"<<":"<<m3<<endl;
        cout<<left<<setw(20)<<"Total"<<":"<<total<<endl;
        cout<<left<<setw(20)<<"average"<<":"<<avg<<endl;
    }
};
int main()
{
    student s[100];
    int i,n;
    cout<<"enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s[i].getdetails();
        s[i].calculate();
    }
    for(i=1;i<=n;i++)
        s[i].display();
}