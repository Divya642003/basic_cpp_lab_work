#include<iostream>
using namespace std;
int fun(int *p)
{
    int rev=0;
    while(*p>0)
    {
    rev=(rev*10)+(*p%10);
    *p=*p/10;
    }
    return rev;
}
int main()
{
    int a;
    cout<<"\n***************************************PROGRAM STARTED *****************************************"<<endl;
    cout<<"________DIVYA SINGH__SECTION -G______200121172__________________________"<<endl;
    cout<<" ENTER A NUMBER : ";
    cin>>a;
    cout<<" a = "<<a<<endl;
    cout<<" REVERSE OF THE NUMBER IS : "<<fun(&a);
    cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl;

    return 0;
}