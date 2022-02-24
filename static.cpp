#include<iostream>
using namespace std;
class object{
    public:
    int a;
    float b;
    static int countobject;
    object(int x,float y)
    {
        a=x;
        b=y;

        countobject++;
    }
    static int getcount()
    {
        return countobject;
    }
};
int object::countobject=0;

int main()
{
    object a1(2,3.6);
    object a2(3,4.6);
    object a3(4,5.6);
     cout<<"total no. objects are: "<<object::getcount()<<endl;
}