#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
    return 0;
}