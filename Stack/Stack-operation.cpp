#include<iostream>
using namespace std;
#define MAX 3
class Stack
{
int a[MAX],TOP,temp;
public:
Stack()
{
    TOP=-1;
    temp=0;
}
void push(int n)
{
    if(TOP==MAX-1)
    {
        cout<<endl<<"Stack overloaded";
    }
    else
    {
        TOP++;
        a[TOP]=n;
    }
}
int pop()
{
    if(TOP==-1)
    {
        cout<<"Stack underloaded";
    }
    else
    {
        temp=a[TOP];
        TOP--;
    }
    return temp;
}
int peep()
{
    return a[TOP];
}
void display()
{
    int i;
    cout<<"Elements in stack are:";
    for(i=0;i<MAX;i++)
    cout<<a[i]<<",";
}
};
int main()
{
    int r,k;
    Stack s;
    s.push(3);
    s.push(4);
    s.push(67);
    s.display();
    s.push(6);
    r=s.peep();
    cout<<endl<<"Peeping element is:"<<r<<endl;
    k=s.pop();
    cout<<"Deleted element is:"<<k<<endl;
    k=s.pop();
    cout<<"Deleted element is:"<<k<<endl;
    k=s.pop();
    cout<<"Deleted element is:"<<k<<endl;
    s.pop();
    return 0;
}
