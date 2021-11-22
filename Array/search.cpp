#include<iostream>
using namespace std;
#define MAX 5
class Array
{
    int a[MAX],i;
    public:
    Array()
    {
        cout<<"Enter 5 elements in array:";
        for(i=0;i<MAX;i++)
        {
            cin>>a[i];
        }
    }
    void search()
    {
        int n;
        cout<<"Elements in array are:";
        for (i=0;i<MAX;i++)
        {
            cout<<a[i]<<",";
        }
        cout<<"Enter a Element to search in array which is already present in array:";
        cin>>n;
        for(i=0;i<MAX;i++)
        {
        if(a[i]==n)
        {
           cout<<endl<<"Position of "<<n<<" is "<<i+1;
        }
        }
    }
};
int main()
{
    Array b;
    b.search();
    return 0;
}
