#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
      cout<<a<<"is largest";
    else if(b>=a && b>=c)
       cout<<b<<"is largest";
    else
        cout<<b<<"is largest";
    return 0;
}