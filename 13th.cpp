#include<iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"\n******************************************** PROGRAM STARTED **************************************** ";
    string s1;
    cout<<"\n ENTER THE FIRST STRING : ";
    getline(cin,s1);
    string s2;
    cout<<"\n ENTER THE SECOND STRING : ";
    getline(cin,s2);
    for(int i=0;i<s2.length();i++)
    {
        for(int j=0;j<s1.length();j++)
        {
            if(s2[i]==s1[j])
            {
    
                s1[j]='@';                                            
            }
        }
        
    }
    cout<<"\n AFTER REMOVING ALL DUPLICATES CHARACTERS FROM THE FIRST STRING : "<<endl;
   for(char& i: s1)
    {
        if(i!='@')
        {
            cout<<i<<endl;
        }
    }
     cout<<"******************************************** PROGRAM ENDED ****************************************\n";
}