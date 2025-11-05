#include<iostream>
using namespace std;
class unaryop
{
    private:
    int x,y,z;
    public:
    unaryop()
    {
        x=0,y=0,z=0;
    }
    unaryop(int a, int b, int c)
    {
        x=a,y=b,z=c;
    }
    void display()
    {
        cout<<"\n\n\t"<<x<<" "<<y<<" "<<z;
    }
    void operator-();
};
void unaryop :: operator-()
{
    x=-x;y=-y,z=-z;
}
int main()
{
    unaryop un(10,40,70);
    cout<<"\n\nNumbers are ::\n";
    un.display();
    -un;
    cout<<"\n\nNumbers are after overloaded minus (-) operator ::\n";
    un.display();
    return 0;
}