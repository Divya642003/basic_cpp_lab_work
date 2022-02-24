/*
9.	Create a class employee having data members as: name, 
id, salary;  member function as: enterdetail(), 
printdetail(), search_id(), search_name(),
The program should do the following tasks:
a)	Take the details as input from the user and print those details.
b)	Search details of an employee on the basis of employee id.
c)	Search details on the basis of name.
*/
#include <iostream>
using namespace std;


 typedef class employee
 {
     string name;
     string id;
     double salary;

     public:
        void enterdetail();
        void printdetail();

        string get_name();
        string get_id();

        static int  search_id(employee arr[],int size, string id);
        static int  search_name(employee arr[],int size,string name);
 }emp;

int main()
{
    
    cout<<"\n\n************************************** PROGRAM STARTED **************************************\n\n";
    cout<<"**************************************   DIVYA SINGH   **************************************\n";
    cout<<"Enter number of employees::";
    int n;
    cin>>n;
    cin.ignore();

    emp arr[n];

    cout<<"Enter details for "<<n<<" employees::";
    
    for(int i=0;i<n;i++)
    {
        cout<<"\nFor "<<i+1<<" employee:\n";
        arr[i].enterdetail();
        

    }
    while (1){
    cout<<"\n\n*****************************************************************************\n\n";
    cout<<"##### MENU #####\n";
    cout<<"1.SHOW DETAIL"<<endl;
    cout<<"2.SEARCH BY ID"<<endl;
    cout<<"3.SEARCH BY NAME"<<endl;
    cout<<"4.EXIT"<<endl;

    int choice;
    cout<<"\nEnter your choice::";
    cin>>choice;
    cin.ignore();

    switch(choice)
    {
        case 1:
        {
            cout<<"\n\n";
            for(int i=0;i<n;i++)
            {
                cout<<"EMPLOYEE "<<i+1<<": ";
                arr[i].printdetail();
                
            }
            break;
        }

        case 2:
        {
            cout<<"Enter id to be searched:";
            string id;
            getline(cin,id);
            int i=emp::search_id(arr,n,id);

            if(i==-1)
            {
                cout<<"\nGiven id not found..."<<endl;
            }

            else
            {
                cout<<"\nGiven id found, details of associated employee::";
                arr[i].printdetail();
            }
            break;
        }

        case 3:
        {
            cout<<"Enter name to be searched:";
            string name;
            getline(cin,name);
            int i=emp::search_name(arr,n,name);

            if(i==-1)
            {
                cout<<"\nGiven name not found..."<<endl;
            }

            else
            {
                cout<<"\nGiven name found, details of associated employee::";
                arr[i].printdetail();
            }
            break;
        }

        case 4:
        {
            cout<<"\n\n*************************************** PROGRAM ENDED ***************************************\n\n";
            
            return 0;
        }

        default: cout<<"\n\nINVALID CHOICE....\n";
    }
    }
}


void employee::enterdetail()
{
    cout<<"Enter name:";
    getline(cin,name);
    
    cout<<"Enter id:";
    getline(cin,id);
    
    cout<<"Enter salary:";
    cin>>salary;
    cin.ignore();
    return;
}

void employee::printdetail()
{
    cout<<"\n\n**********************************************\n\n";
    cout<<"Employee Name: "<<name<<endl;
    cout<<"Employee id  : "<<id<<endl;
    cout<<"Salary       : "<<salary<<endl;
    cout<<"\n\n**********************************************\n\n";
    return;
}

string employee::get_name()
{
    return name;
}

string employee::get_id()
{
    return id;
}

int employee::search_id(employee arr[],int size, string id)
{
    for (int i=0;i<size;i++)
    {
        if(id==arr[i].get_id())
        {
            return i;
        }
    }

    return -1;
}

int employee::search_name(employee arr[],int size, string name)
{
    for (int i=0;i<size;i++)
    {
        if(name==arr[i].get_name())
        {
            return i;
        }
    }

    return -1;
}