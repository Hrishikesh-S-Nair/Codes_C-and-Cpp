#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

void initialise (int l, int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

int perimeter()
{
    return 2*(length+breadth);
}
};

int main()
{
    Rectangle r={0,0};
  
    int length, breadth;
    cout<<"Enter Length and Breadth ";
    cin>>length>>breadth;

    r.initialise (length, breadth);

    int a=r.area();
    int p=r.perimeter();

    cout<<"Area "<<a<<endl<<"Perimeter "<<p<<endl;

    return 0;
}