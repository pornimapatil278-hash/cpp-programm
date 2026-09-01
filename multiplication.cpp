#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<<"Enter a number:";
    cin>>n;

    for(int i=1; i<=10; i++)
    {
        cout<<n<<"x"<<i<<"="<<n*1<<endl;
    }
    return 0;
}