#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number to check grade : ";
    cin>>num;

    switch(num)
    {
        case 10:
        cout<<"it is 10";
        break;
        case 20:
        cout<<"it is 20";
        break;
        case 30:
        cout<<"it is 30";
        break;
        default:
        cout<<"Not 10,20 or 30";
        break;
    }
}