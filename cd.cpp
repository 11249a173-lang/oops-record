#include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string name;
    public:
    student()
    {
        rollno=1;
        name="balu";
    }
    student(int r,string n)
    {
        rollno=r;
        name=n;
    }
    student(student&s)
    {
        rollno=s.rollno;
        name=s.name;
    }
    ~student()
    {
        cout<<"name:"<<endl;
    }
    void display()
    {
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
int main()
{
    student s1;
    student s2(101,"saraswathi");
    student s3=s2;
    s1.display();
    s2.display();
    s3.display();
}