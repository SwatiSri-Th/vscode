#include<iostream>
using namespace std;
int main()
{
    int i,n;
    bool p = true;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            p=false;
            break;
        }
    }
    if(p==true)
    cout<<" is a prime number";
    else
    cout<<" is not a prime number";

    return 0;
}