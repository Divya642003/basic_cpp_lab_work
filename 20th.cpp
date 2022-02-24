#include<iostream>
using namespace std;
class Shape 
{ 
    public:  
 double length, width; 
   
 int get_data()
 {
     cout<<"\nenter the lenght           : ";
     cin>>length;
     cout<<"enter the width            : ";
     cin>>width;
 }
  virtual double display_Area() 
 { 
 cout << "........................................THE AREA IS CALCULATED AS .............................." << endl; 
 return 1; 
 } 
};    
class triangle : public Shape 
{ 
public:
 
 double display_Area() 
 { 
 cout << "AREA OF TRIANGLE IS        : " << 0.5*(length * width) << endl; 
 return (length * width); 
 } 
}; 
class Rectangle : public Shape 
{ 
public:
 
 double display_Area() 
 { 
 cout << "AREA OF RECTANGLE IS       : " << length * width<< endl; 
 return (length * width); 
 } 
}; 
  
int main(void) 
{ 
    cout<<"\n***************************************PROGRAM STARTED *****************************************"<<endl;
    cout<<"________DIVYA SINGH__SECTION -G______200121172__________________________"<<endl;    
 Shape* s; 
 Shape sh;
 s=&sh;
 s->display_Area();
 Rectangle rec; 
 triangle tr; 
  s = &rec;
  s->get_data(); 
 s->display_Area(); 
 s = &tr; 
 s->get_data();
 s->display_Area(); 
  cout<<"\n***************************************PROGRAM ENDED *****************************************"<<endl; 
return 0; 
} 

