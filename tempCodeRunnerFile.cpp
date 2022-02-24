#include <iostream> 
using namespace std; 
int main ()  
{  
    cout<<"\n***************************************PROGRAM STARTED *****************************************"<<endl;
    cout<<"________DIVYA SINGH__SECTION -G______200121172__________________________\n"<<endl;
int a ;  
int b ; 
cout<<"ENTER THE VALUE OF  a             : ";
cin>>a;
cout<<"ENTER THE VALUE OF  b             : ";
cin>>b; 
try  
{ 
if( b == 0 )  
{  
throw "____________________EXCEPTION CAUGHT_______________________\n Attempted to divide by zero!";  
} 
float c = 0;  
c = a/b; 
cout << c << endl;  
} 
catch (const char* e)  
{  
cerr << e << endl;  
}  
cout<<"end of Main function"<<endl; 
cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl;  
return 0;  
}  