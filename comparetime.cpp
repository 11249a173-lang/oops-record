#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes,seconds;
    public:
    Time()
    {
       
    }
    Time(int h,int m,int s)
    {
        if(h>0 && h<23 && m>0 && m<=59 && s>0 && s<=59)
        {
            hours=h,minutes=m,seconds=s;
        }
        else
        cout<<"invalid time";
    }
    int operator==(Time t3)
    {
        return(hours==t3.hours && minutes==t3.minutes && seconds==t3.seconds);
    }
};
int main()
{
    Time t1(7,11,30);
    Time t2(3,30,41);
    if(t1==t2)
    cout<<"clock shows same time"<<endl;
    else
    cout<<"clock will show different time"<<endl;
}