#include<iostream>
using namespace std;
class student
{
    private:
    int id;
    public:
    void setid(int i)
    {
        id=i;
    }
    void showid()
    {
        cout<<"ID :"<<id<<endl;
    }
};
int main()
{
    student *p=new student[3];
    for(int i=0;i<3;i++)
    {
        p[i].setid(i+1);
    }
    for(int i=0;i<3;i++)
    {
        p[i].showid();
    }
    delete[]p;
}