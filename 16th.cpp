#include<iostream>
using namespace std;
int fun(int *p,int *q,int *r)
{
    int c=((*p>*q)&&(*p>*r))?*p:(*q>*r)?*q:*r;
    return c;
}
int main()
{
    int a,b,c;
    cout<<"\n***************************************PROGRAM STARTED *****************************************"<<endl;
    cout<<" ENTER THREE NUMBERS : ";
    cin>>a>>b>>c;
    cout<<"\n a = "<<a<<"\n b = "<<b<<"\n c = "<<c<<endl;
    cout<<" THE GREATER OF THREE NUMBERS IS : "<<fun(&a,&b,&c);
    cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl;

    return 0;
}