#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"\n******************************************** PROGRAM STARTED **************************************** ";
    string s1;
    cout<<"\n ENTER THE STRING : ";
    getline(cin,s1);
        int c;
        int n=s1.length();
    for(int i=0;i<=n/2;i++)
    {
        if(s1[i]==s1[n-1])
        {
         c=0;
         n--;
        }
        else
        c=1;
    }
    if(c!=1)
    cout<<" STRING IS PALINDROME "<<endl;
    else
     cout<<" STRING IS NOT PALINDROME "<<endl;    
    cout<<"******************************************** PROGRAM ENDED ********************************************";
}