#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int l=0, b=0;

    printf("Enter Length and Breadth ");
    cin>>l>>b;

    int area =l*b;
    int peri=2*(l+b);
    
    printf("Area %d \nPerimeter %d \n", area, peri);

    return 0;
}