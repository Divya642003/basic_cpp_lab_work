#include <iostream>
using namespace std;
int main()
{
    int month_number;
    cout<<"******************************** PROGRAM STARTED ****************************"<<endl;
    cout<<" ENTER THE MONTH NUMBER :";
    cin>>month_number;


    int c=month_number%2;
    switch(c)
    {
        case 0:{
            if(month_number==2)
            {
                cout<<"NUMBER OF DAYS MAY BE 28 OR 29 AS IT IS MONTH OF FEBRARY"<<endl;
            }
           else if(month_number!=8)
            cout<<"NUMBER OF DAYS ARE : 30"<<endl;
            else
            cout<<" special case -> MONTH OF AUGUST -> "<<"NUMBER OF DAYS ARE : 31"<<endl;
            break;
               }
        case 1:{
            cout<<"NUMBER OF DAYS ARE : 31"<<endl;
            break;
        }
        default :{
            cout<<" INVALID CHOICE "<<endl;
            break;
        }
        
}
    cout<<"******************************** PROGRAM ENDED ******************************"<<endl;
}