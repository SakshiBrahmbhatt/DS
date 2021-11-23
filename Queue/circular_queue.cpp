#include<iostream>
using namespace std;
#define MAX 5
class Circularqueue
{
    int a[MAX],i,f,r,temp;
    public:
    Circularqueue()
    {
        f=-1;
        r=-1;
        temp=0;
    }
    void enqueue(int n)
    {
      if((r==MAX-1&&f==0)||r==f-1)
      cout<<endl<<"Queue is overflow";
      else
      {
         if(r==-1&&f==-1)
         {
             r=0;
             f=0;
         }
         else
         {
            if(f!=0&&r==MAX-1)
            r=0;
            else
            {
                r++;
            }
         }
         a[r]=n;
      }
    }
    void dequeue()
    {
        if(f==-1)
        cout<<endl<<"Queue is underflow";
        else
        {
            temp=a[f];
        if(f==r)
        {
        f=-1;
        r=-1;
        }
        else
        {
            f++;
        }
        cout<<endl<<"Deleted element in queue is:"<<temp;
        }
    }
    void display()
    {
        if(f==-1||f==r+1)
        cout<<endl<<"Queue is empty";
        else
        {
            cout<<endl<<"Elements in queue:";
            if(r>f)
            {
              for(i=f;i<=r;i++)
              {
                cout<<a[i]<<",";
              }
            }
            else
            {
                for(i=f;i<MAX;i++)
                cout<<a[i]<<",";
                for(i=0;i<=r;i++)
                cout<<a[i]<<",";
            }
        }
    }
};
int main()
{
    Circularqueue c;
    c.enqueue(3);
    c.enqueue(4);
    c.enqueue(5);
    c.enqueue(2);
    c.enqueue(6);
    c.display();
    c.dequeue();
    c.dequeue();
    c.enqueue(3);
    c.display();
    return 0;
}
