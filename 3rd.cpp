#include <iostream>
#include<math.h>
using namespace std;
int main()
{
     cout<<"******************************** PROGRAM STARTED ****************************"<<endl;
     int a,b;
     cout<<"ENTER TWO NUMBERS : "<<endl;
     cin>>a>>b;
     cout<<"_________________________________ OPERATIONS FOR CALCULATION _____________________________"<<endl;
     cout<<"1. ADDITION "<<endl<<"2. SUBTRACTION "<<endl<<"3. MULTIPLICATION "<<endl<<" 4. DIVISION "<<endl<<"5. POWER CALCULATION "<<endl;
     cout<<"6 :-> TO EXIT THE PROGRAM "<<endl;
     int choice;
     while(1)
     {
     	cout<<"ENTER THE CHOICE : ";
     	cin>>choice;
         switch(choice)
         {
             case 1:
             {
                 cout<<" ADDITION RESULT : "<<a+b<<endl;
                 break;
             }
             case 2:
             {
                 cout<<" SUBTRACTION RESULT : "<<a-b<<endl;
                 break;
             }
             case 3:{
                 cout<<" MULTIPLICATION RESULT : "<<a*b<<endl;
                 break;
             }
             case 4:{
                 cout<<" DIVISION RESULT : "<<(float)a/b<<endl;
                 break;
             }
             case 5:{
                 cout<<" A TO THE POWER B RESULT IS : "<<pow(a,b)<<endl;
                 break;
             }
             case 6:{
                 cout<<"******************************** PROGRAM ENDED ********************************"<<endl;
                 exit(1);
             }
             default :{
                 cout<<" INVALID CHOICE "<<endl;
                 break;
             }
         }
     }
}