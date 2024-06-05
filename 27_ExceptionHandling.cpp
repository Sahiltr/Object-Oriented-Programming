#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    try
    {
        if(a==b)
        {
            throw 1; 
        }
        else{
            c=(a+b)/(a-b);
            cout<<"c: "<<c<<endl;
        }
    }
    catch(int i)
    {
        cout<<"error divide by zero"<<endl;
    
    cout<<"IMP"<<endl;
}