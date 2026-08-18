#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping:"<<a<<"  "<<b;
    return 0;
}