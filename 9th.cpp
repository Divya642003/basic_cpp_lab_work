#include<iostream>
using namespace std;
int main()
{
    cout<<"********************************************** PROGRAM STARTED **********************************"<<endl;
    int n;
    cout<<
    int a[n];
    int even[10],odd[10];
    cout<<"ENTER THE ARRAY : ";
    int j=0,k=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        
        if(a[i]%2==0)
        {
            even[j++]=a[i];
        }
        else
        {
            odd[k++]=a[i];
        }
    }
    cout<<"ODD ELEMENTS OF AN ARRAY ARE : ";
    for(int i=0;i!=j;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<"\nEVEN ELEMENTS OF AN ARRAY ARE : ";
    for(int i=0;i!=k;i++)
    {
        cout<<odd[i]<<" ";
    }  
    cout<<" "<<endl;  
    cout<<"********************************************** PROGRAM ENDED **********************************"<<endl;
  }