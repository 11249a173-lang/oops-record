#include<iostream>
using namespace std;
class student
{
    private:
    char name[20];
    int rno;
    public:
    void getstudent()
    {
        cout<<"enter name of the student=";
        cin>>name;
        cout<<"enter roll number of the student=";
        cin>>rno;
    }
    void displaystudent()
    {
        cout<<"name of the student="<<name;
        cout<<"\nroll number of the student="<<rno;
    }
};
class bsc: public student
{
    private:
    int phy,chem,math;
    public:
    void getbsc()
    {
        getstudent();
        cout<<"enter math marks=";
        cin>>math;
        cout<<"enter physics marks=";
        cin>>phy;
        cout<<"enter chemistry marks=";
        cin>>chem;
    }
    void displaybsc()
    {
        displaystudent();
        cout<<"\n math marks="<<math;
        cout<<"\n physics marks="<<phy;
        cout<<"\n chemistry marks="<<chem;
    }
};
class ba: public student
{
    private:
    int hindi,punjabi;
    public:
    void getba()
    {
        getstudent();
        cout<<"enter hindi marks=";
        cin>>hindi;
        cout<<"enter punjabi marks=";
        cin>>punjabi;
    }
    void displayba()
    {
        displaystudent();
        cout<<"\n hindi marks="<<hindi;
        cout<<"\n punjabi marks="<<punjabi;
    }
};
int main()
{
    bsc b1;
    ba b2;
    int choice;
    cout<<"1. bsc 2. ba \n enter your stream=";
    cin>>choice;
    if(choice==1)
    {
        b1.getbsc();
        b1.displaybsc();
    }
    else
    {
        b2.getba();
        b2.displayba();
    }
}