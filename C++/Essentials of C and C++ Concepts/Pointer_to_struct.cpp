#include <iostream>

using namespace std;

struct Rectangle
{
    int length, breadth;
};

int main()
{
  Rectangle *p;
  p= new Rectangle;

  p->length=15;
  p->breadth=7;
  
  cout<<p->length<<endl;
  cout<<p->breadth<<endl;

  return 0;
}