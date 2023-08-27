#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialise (Rectangle * r1, int l, int b)
{
    r1->length=l;
    r1->breadth=b;
}

int area(struct Rectangle r2)
{
    return r2.length*r2.breadth;
}

int perimeter(Rectangle r3)
{
    return 2*(r3.length+r3.breadth);
}

int main()
{
    Rectangle r={0,0};
  
    int length, breadth;
    cout<<"Enter Length and Breadth ";
    cin>>length>>breadth;

    initialise (&r, length, breadth);

    int a=area(r);
    int p=perimeter(r);

    cout<<"Area "<<a<<endl<<"Perimeter "<<p<<endl;

    return 0;
}