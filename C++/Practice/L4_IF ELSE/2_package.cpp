// Only accept offer which is More than 15 LPA

#include<iostream>
using namespace std;
int main ()
{
    int pack;
    cout<<"Enter Package Amt (In LPA) : ";
    cin>>pack;
    if(pack>=15)
    {
        cout<<"Offer Accepted";
    }
    else
    {
        cout<<"Offer Rejected";
    }
}