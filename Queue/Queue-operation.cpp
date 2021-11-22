#include<iostream>
using namespace std;
#define MAX 3
class Queue
{
    int a[MAX],f,r,temp;
    public:
    Queue()
    {
        r=-1;
        f=-1;
        temp=0;
    }
    void enqueue(int n)
    {
        if(r==MAX-1)
        cout<<endl<<"Queue is overflow";
        else
        {
            if (r==-1&&f==-1)
            {
            r=0;
            f=0;
            }
            else
            {
            r++;
            } 
            a[r]=n;
        }  
    }
    void dequeue()
    {
        //cout<<endl<<r<<f<<endl;
        if(f==-1||f>r)
        cout<<endl<<"Queue is underflow";
        else
        {
            temp=a[f];
            f++;
            cout<<endl<<"Deleted element is:"<<temp;
        }   
    }
    void display()
    {
        int i;
        if(f==-1||f>r)
        cout<<"Queue is empty";
        else
        {
        cout<<"Elements in queue:";
        for(i=f;i<=r;i++)
        {
            cout<<a[i]<<",";
        }
        }
        //cout<<f;
    }
};
int main()
{
    int k;
    Queue q;
    q.enqueue(3);
    q.enqueue(34);
    q.enqueue(44);
    q.display();
    q.enqueue(6);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}
