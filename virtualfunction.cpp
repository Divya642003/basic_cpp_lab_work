#include<iostream>
using namespace std;
class a
{
    public:
    void x1()
    {
        cout<<" inside class a x1 func";
    }
       virtual void x2()
    {
        cout<<" inside class a x2 func";
    }
};
class b:public a
{
  public:
  void x2()
  {
      cout<<" inside class b x2 func";
  }
};
int main()
{
    
    a *ptr=new b();
    ptr->x2();

}