// Cheack Number Is Posative, Nagative Or Zero

#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    if(x>0)
    {
        cout<<"Posative Number";
    }
    else if(x<0)
    {
        cout<<"Nagative Number";
    }
    else
    {
        cout<<"Zero(0)";
    }
}