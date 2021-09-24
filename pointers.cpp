#include<iostream>
using namespace std;
int main()
{
    int *a{nullptr}, *b{nullptr}, x{}, y{};
    cin>>x>>y;
    a=&x;
    b=&y;
    cout<<*a+*b<<endl;
    if(*a>*b)
        cout<<*a-*b<<endl;
    else
        cout<<*b-*a<<endl;
}