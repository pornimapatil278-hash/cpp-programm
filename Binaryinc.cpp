#include<iostream>
using namespace std;
class Number
{
    int x;
public:
    Number(int n)
    {
        x=n;
    }
    Number operator+(Number n)
    {
        Number temp(0);
        temp.x=x+n.x;
        return temp;
    }
    void display()
    {
        cout<<"Value="<<x<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"Enter first value:";
    cin>>a;
    cout<<"Enter second value:";
    cin>>b;
    Number n1(a);
    Number n2(b);
    Number n3=n1+n2;
    cout<<"Addition:";
    n3.display();
    return 0;
}