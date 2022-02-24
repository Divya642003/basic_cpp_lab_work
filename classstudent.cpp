#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
    string name;
    int roll_no;
    float mark_sub1,mark_sub2,mark_sub3;
    public:
    student()
    {
       cout<<"\n ENTER THE NAME OF STUDENT : ";
       getline(cin,name); 
       cout<<"\n ENTER THE ROLL NO OF STUDENT : ";
       cin>>roll_no;
       cout<<"\n ENTER THE SUBJECT 1 MARKS OF STUDENT : ";
       cin>>mark_sub1;
       cout<<"\n ENTER THE SUBJECT 2 MARKS OF STUDENT : ";
       cin>>mark_sub2;
       cout<<"\n ENTER THE SUBJECT 3 MARKS OF STUDENT : ";
       cin>>mark_sub3;       
    }

        void display()
    {
       cout<<"\n THE NAME OF STUDENT : "<<name ;
       cout<<"\n THE ROLL NO OF STUDENT : "<<roll_no;
       cout<<"\n THE SUBJECT 1 MARKS OF STUDENT : "<<mark_sub1;
       cout<<"\n THE SUBJECT 2 MARKS OF STUDENT : "<<mark_sub2;
       cout<<"\n THE SUBJECT 3 MARKS OF STUDENT : "<<mark_sub3<<endl;      
    }

    ~student()
    {
        cout<<"\n DESTRUCTOR \n";
    }
};
int main()
{
    cout<<"******************************** PROGRAM STARTED ****************************"<<endl; 
    cout<<"________DIVYA SINGH__SECTION -G______200121172__________________________"<<endl;
    student s1,s2;
    cout<<"******************************** student 1 ****************************"<<endl; 
    s1.display();
    cout<<"******************************** student 2 ****************************"<<endl; 
    s2.display();
    cout<<"\n******************************** PROGRAM ENDED ****************************"<<endl; 
    return 0;
}