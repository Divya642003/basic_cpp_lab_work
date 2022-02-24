#include<iostream>
#include <string>
using namespace std;

int main()
{
   cout<<"\n********************************************** PROGRAM STARTED **********************************"<<endl;    
    string s1;
    cout<<"\n ENTER THE STRING : ";
    getline(cin,s1);
    string s2=s1;
    cout<<"\n ALL THE DUPLICATES OF THE STRING ARE : "<<endl;
   for(int i=0;i<s2.length();i++)
    {
        int c=1;
        for(int j=i+1;j<s2.length();j++)
        {
            if(s2[i]==s2[j] && s2[i]!='@')
            {
                c++;
                s2[j]='@';                                            
            }
        }    
        if(c!=1)
        {
            cout<< s2[i]<<endl;
        }
    }
    cout<<"\n********************************************** PROGRAM ENDED **********************************"<<endl;    
}