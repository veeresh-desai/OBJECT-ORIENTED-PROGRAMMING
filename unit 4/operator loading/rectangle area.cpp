#include<iostream>

using namespace std;

class Rectangle{
double length;
double width;
public:
Rectangle(double l,double w)
{
length=l,width=w;
}
bool operator<(Rectangle &r)
{
if(length*width<r.length*r.width)
return true;
else
return false;
}
};
int main()
{
Rectangle r1(4.34653,5.438768),r2(6.344537,8.34786438);

if(r1<r2)
cout<<"r2 is larger";
else
cout<<"r1 is larger";

}