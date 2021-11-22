#include<iostream>
using namespace std;
#define MAX 5
class Array
{
    int pos,i,a[MAX];
    public:
    Array()
    {
        cout<<"Enter 4 elements in array:";
        for(i=0;i<MAX-1;i++)
        {
            cin>>a[i];
        }
    }
    void insertion(int n,int b)
    {
        if(n==MAX||n>MAX)
        {
            cout<<"Enter number smaller than 5";
        }
        else
        {
        pos=n;
        for(i=MAX-1;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=b;
        cout<<"After insertion array is:";
        for(i=0;i<MAX;i++)
        {
            cout<<a[i]<<",";
        }
        }
    }
   void deletion(int x)
    {
        int temp=0;
         if(x==MAX||x>MAX)
        {
            cout<<"Enter number smaller than 5";
        }
        else
        {
        pos=x;
        for(i=pos;i<MAX;i++)
        {
            temp=a[pos];
            a[pos]=a[pos+1];
        }
        cout<<endl<<"After deletion array is:";
        for(i=0;i<MAX-1;i++)
        {
            cout<<a[i]<<",";
        }
        }
    }
};
int main()
{
    Array a;
    a.insertion(3,5);
    a.deletion(4);
    return 0;
}
