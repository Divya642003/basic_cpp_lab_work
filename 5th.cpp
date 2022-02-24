#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int large,small;
    cout<<"********************************************** PROGRAM STARTED **********************************"<<endl;
    cout<<"ENTER THE ARRAY : ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
         large=a[0];
         small=a[0];
        if(a[i]>large)
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    cout<<"LARGE ELEMENT OF AN ARRAY IS : "<<large<<endl;
    cout<<"SMALL ELEMENT OF AN ARRAY IS : "<<small<<endl;
    cout<<"********************************************** PROGRAM ENDED **********************************"<<endl;
  
}