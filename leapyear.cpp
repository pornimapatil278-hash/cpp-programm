#include<iostream>
int main()
{
    int year;
    
    std::cout<<"Enter a year:";
    std::cin>>year;
    
    if(year%400==0||(year%4==0 && year%100!=00))
           std::cout<<"It is leap year";
        else
            std::cout<<"It is not a leap year";
        return 0;
}