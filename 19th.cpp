#include <iostream> 
using namespace std; 
class Vehicle 
{ 
 public: 
 Vehicle() 
 { 
 cout << "This is a Vehicle" << endl; 
 } 
}; 
// first sub_class derived from class vehicle 
class fourWheeler: public Vehicle 
{ public:
 fourWheeler() 
 { 
 cout<<"Objects with 4 wheels are vehicles"<<endl; 
 } 
}; 
// sub class derived from the derived base class fourWheeler 
class Car: public fourWheeler{ 
 public: 
 Car() 
 { 
 cout<<"Car has 4 Wheels"<<endl; 
 } 
};
  
int main() 
{  
    cout<<"\n***************************************PROGRAM STARTED *****************************************"<<endl;
    cout<<"________DIVYA SINGH__SECTION -G______200121172__________________________"<<endl;

    Car obj; //creating object of sub class will invoke the constructor of base classes 

    cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl; 
 return 0; 
} 
