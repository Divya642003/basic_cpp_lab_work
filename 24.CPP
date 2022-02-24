#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class item
{
    public:

    string name;
    string cost;

    public:

    void getitem()
    {
        cout<<"Enter Name of Item:";
        cin>>name;
        cout<<"Enter Cost of Item:";
        cin>>cost;
    }

    void display()
    {
        cout<<"Item Name: "<<name<<"\t"<<"Item Cost: "<<cost<<endl;
    }

};

void store(item * i)
{
        fstream f;
        f.open("item.txt",ios::binary|ios::out);
        f.write((char*)i,sizeof(item));
        f.close();
}

void read_and_display()
{
    item * i;
    fstream f;
    f.open("item.txt",ios::binary|ios::in);
    f.read((char*)i,sizeof(item));
    i->display();
    f.close();
}

int main()
{
    item *i =new item;
    i->getitem();
    cout<<"\nStoring Item in File....\n";
    store(i);
    cout<<"\nReading Item from File....\n";
    read_and_display();
    return 0;
}