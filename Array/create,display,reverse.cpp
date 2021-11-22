#include<iostream>
using namespace std;
#define MAX 5
class Array
{
    int a[MAX],i;
    public:
    void create()
    {
        cout<<"Enter 5 number in array:";
        for(i=0;i<MAX;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"Elements in array:";
        for(i=0;i<MAX;i++)
        {
            cout<<a[i]<<",";
        }
    }
    void reverse()
    {
        cout<<endl<<"Reverse array:";
        for(i=MAX-1;i>=0;i--)
        {
            cout<<a[i]<<",";
        }
    }
};
int main()
{
    Array b;
    b.create();
    b.display();
    b.reverse();
    return 0;
}
