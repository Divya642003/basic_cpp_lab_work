#include<iostream>
using namespace std;
int main()
{
    cout<<"****************************************************** PROGRAM STARTED ****************************************************";
    int n;
    cout<<"\n ENTER THE TOTAL NUMBER OF ELEMENTS IN AN ARRAY : ";
    cin>>n;
    int a[n];
    cout<<"\n ENTER ELEMENTS IN AN ARRAY : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
   
    int d;
    cout<<"\n ENTER THE NUMBER OF COUNTS TO LEFT SHIFT THE ARRAY : ";
    cin>>d;
    for(int i=1;i<=c;i++)
    {
         int temp=a[n-1];
        cout<<"\n";
        cout<<i<<" "<<"THE  LEFT ROTATION OF ARRAY IS : "<<endl;
        for(int j=n-1;j>0;j--)
        {
            
        a[j]=a[j-1];
       
        }
        for(int i=0;i<n;i++)
        {
             a[0]=temp;
        cout<<a[i]<<" ";
        }
    }
        cout<<"\n****************************************************** PROGRAM ENDED ****************************************************";
}
