//Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cout<<"Enter 1st Number :";
    cin>>x;
    cout<<"Enter 2nd Number :";
    cin>>y;
    if(x==y)
    {
        cout<<"Invalid Entry";
    }
    else if(x>y)
    {
        cout<<"Bigger Number : "<<x;
    }
    else
    {
        cout<<"Bigger Number : "<<y;
    }
}