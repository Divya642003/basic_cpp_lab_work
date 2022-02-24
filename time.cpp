#include<iostream>
using namespace std;
class time{
    int hours,minutes,seconds;
    public:
    void entertime(int h,int m,int s)
    {
       hours=h;
       minutes=m;
       seconds=s;
    }
    void display()
    {
        cout<<hours<<"Hours and ";
        cout<<minutes<<"minutes and ";
        cout<<seconds<<" seconds "<<endl;
    }
    void addtime(time,time);
};
void time::addtime(time t1,time t2)
{
    seconds=t1.seconds+t2.seconds;
    minutes=seconds/60;
    seconds=seconds%60;
    minutes=minutes+t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;

}
int main()
{
    time t1,t2,t3;
    t1.entertime(12,45,6);
    t2.entertime(3,30,45);
    t3.addtime(t1,t2);
    cout<<" time is : ";
    t3.display();
}