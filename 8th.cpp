#include<iostream>
using namespace std;
int recursion(int num)
{
    int sum=0,remainder=0;
    if(num==0)
    {
        return 0;
    }
     remainder=num%10;
     sum=sum+remainder;
    return sum+recursion(num/10);
}
int main()
{
    int num;
    cout<<"****************************************************** PROGRAM STARTED ****************************************************";
    cout<<"\n ENTER THE NUMBER : ";
    cin>>num;
    cout<<"\n SUM OF DIGITS OF A NUMBER IS : "<<recursion(num);
    cout<<"\n****************************************************** PROGRAM ENDED ****************************************************";
}