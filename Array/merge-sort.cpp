#include<iostream>
using namespace std;
#define MAX 6
class Array
{
    int a3[MAX],i,j,temp,count;
    int a1[3],a2[3];
    public:
    Array()
    {
        count=0;
        cout<<"Enter 3 sorted elements in first array:";
        for(i=0;i<3;i++)
        {
            cin>>a1[i];
        }
        cout<<"Enter 3 sorted elements in second array and also different for the elements in first array:";
        for(i=0;i<3;i++)
        {
            cin>>a2[i];
        }
    }
    void merge()
    {
        for(i=0;i<3;i++)
        {
            a3[count]=a1[i];
            count++;
        }
        for(i=0;i<3;i++)
        {
            a3[count]=a2[i];
            count++;
        }
        for(i=0;i<MAX;i++)
        {
            for(j=i+1;j<MAX;j++)
            {
                if(a3[j]<a3[i])
                {
                    temp=a3[j];
                    a3[j]=a3[i];
                    a3[i]=temp;
                }
            }
        }
        cout<<"Merged sorted array:";
        for(i=0;i<MAX;i++)
        {
            cout<<a3[i]<<",";
        }
    }
};
int main()
{
    Array b;
    b.merge();
    return 0;
}
