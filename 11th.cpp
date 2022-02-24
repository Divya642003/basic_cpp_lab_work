#include<iostream>
using namespace std;
int main()
{
   cout<<"********************************************** PROGRAM STARTED **********************************"<<endl;
   int n,num;
   cout<<"ENTER TOTAL NUMBER ELEMENTS IN AN ARRAY : ";
   cin>>n;
   int c;
   cout<<"\n ENTER THE NUMBER OF ELEMENTS TO BE ADDED : ";
   cin>>c;
   int a[n+c];
   cout<<"\n ENTER THE ELEMENTS IN AN ARRAY : ";
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=1;i<=c;i++)
   {
     cout<<"\n"<<i<<" element adding in an array ";  
     int k;
     cout<<"\n ENTER THE POSITION INDEX TO INSERT AN ELEMENT IN AN ARRAY : ";
     cin>>k;
     
     cout<<"\n ENTER THE ELEMENT TO BE ADDED IN AN ARRAY : ";
     cin>>num;
     for(int j=(n+c)-1;j>=k;j--)
     {
         a[j]=a[j-1];
     }
     a[k-1]=num;
     for(int v=0;v<n+i;v++)
     cout<<a[v]<<" ";
   }

   cout<<"\n********************************************** PROGRAM ENDED **********************************"<<endl;
}