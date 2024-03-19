#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c;
    cout<<"Before swapping the number :"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping the number"<<endl;
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}