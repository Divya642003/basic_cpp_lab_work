#include<iostream>
using namespace std;
class complex{
    float real,imag;
    public:
    void insert()
    {
            cout<<"\nEnter a complex number:";
            cout<<"\nReal part::";
            cin>>real;
            cout<<"\nImaginary part::";
            cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"j"<<endl;
    }
    complex operator +(complex c2)
    {
            complex c;
            c.real=real+c2.real;
            c.imag=imag+c2.imag;
            return c;
    }
};
int main()
{
    cout<<"\n\n************************************** PROGRAM STARTED **************************************\n\n";
    cout<<"**************************************   DIVYA SINGH   **************************************\n";

    complex c1,c2,c3;
    
    cout<<"Enter c1:\n";
    c1.insert();

    cout<<"\n\nEnter c2:\n";
    c2.insert();

    c3=c1+c2;
    cout<<"\n\nc1+c2=";
    c3.display();

    cout<<"\n\n*************************************** PROGRAM ENDED ***************************************\n\n";
    return 0;
}