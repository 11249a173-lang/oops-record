#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes;
    public:
    void gettime();
    void addtime(Time x1,Time x2);
    void display();
};
void Time :: gettime()
{
    cout<<"enter hours:";
    cin>>hours;
    cout<<"enter minutes:";
    cin>>minutes;
}
void Time :: addtime(Time x1,Time x2)
{
    minutes=x1.minutes+x2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+x1.hours+x2.hours;
}
void Time :: display()
{
    cout<<"Hours:"<<hours<<endl;
    cout<<"Minutes:"<<minutes<<endl;
}
int main()
{
    Time T1,T2,T3;
    T1.gettime();
    T2.gettime();
    T3.addtime(T1,T2);
    T1.display(); 
    T2.display(); 
    T3.display();
}