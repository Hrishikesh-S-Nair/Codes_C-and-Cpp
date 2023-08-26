//Call By Address
#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c; 
}

int main()
{
    int num1=10, num2=15;

    swap(&num1, &num2);
    
    cout<<"First Number "<<num1<<endl;
    cout<<"Second Number "<<num2<<endl; 
    
    return 0;
}