#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int*p;
    p=&a;
    cout<<"value of a :"<<a<<endl;
    cout<<"address  of a :"<<&a<<endl;
    cout<<"pointer p stores  :"<<p<<endl;
    cout<<"value pointed by  p :"<<*p<<endl;
    
}