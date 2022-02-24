#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int max=a>b?a:b;
    int min=a>b?b:a;

    if(max%min==0)
    {
        return min;
    }
    return gcd(max-min,min);
}
int main()
{
    int a,b;
    cout<<"ENTER TWO NUMBERS : ";
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<"GCD OF "<<a<<" AND "<<b<<" IS : "<<result;
    
}