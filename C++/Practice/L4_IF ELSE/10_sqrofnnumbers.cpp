// Print Sqr Of n Natural Numbers 


#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cout<<i<<" = "<<i*i<<endl;
    }
}