#include <iostream>
using namespace std;
class Triangle
{
  public:
  float a,b;
  float a1(float c,float d)
  {
      float area;
      a=c;
      b=d;
      area=0.5*a*b;
      cout<<area<<endl;
      return 0;
  }  
};
class Circle
{
    public:
    float r;
    float a2(float p)
    {
        float area;
        r=p;
        area=3.14*r*r*2;
        cout<<area<<endl;
        return 0;
    }
};
class Square
{
    public:
    int l;
    int a3(int f)
    {
        int area;
        l=f;
        area=l*l;
        cout<<area<<endl;
        return 0;
    }
};
int main()
{
    Triangle t1;
    Circle c1;
    Square s1;
    t1.a1(2.3,4.5);
    c1.a2(2.5);
    s1.a3(3);
    return 0;
}