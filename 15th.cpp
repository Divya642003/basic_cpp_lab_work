#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"\n***************************************PROGRAM STARTED *****************************************";
    string s;
    cout<<"\n ENTER THE STRING :";
    getline(cin,s);
    n=s.length();
    for(int i=0;i<=n/2;i++)
    {
        char temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    cout<<" REVERSED STRING IS : ";
    for(int i=0;i<n;i++)
    cout<<s[i];
    cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl;
    return 0;
}