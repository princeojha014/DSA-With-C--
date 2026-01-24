// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.\

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter A Number : ";
    cin>>n;
    if(n==1)
    {
        cout<<"Jan";
    }
    else if(n==2)
    {
        cout<<"Fab";
    }
    else if(n==3)
    {
        cout<<"Mar";
    }
    else if(n==4)
    {
        cout<<"April";
    }
    else if(n==5)
    {
        cout<<"May";
    }
    else if(n==6)
    {
        cout<<"Jun";
    }
    else if(n==7)
    {
        cout<<"July";
    }
    else if(n==9)
    {
        cout<<"Aug";
    }
    else if(n==9)
    {
        cout<<"Sept";
    }
    else if(n==10)
    {
        cout<<"Oct";
    }
    else if(n==11)
    {
        cout<<"Nov";
    }
    else if(n==12)
    {
        cout<<"Dec";
    }
    else
    {
        cout<<"Invalid Entry";
    }
}