#include<iostream>
using namespace std;
int AOR(int a, int b);

int AOR(int a ,int b)
{
    int area = a * b ;
    cout<<area;
}

int main()
{
    int width{},height{};
    cin>>width>>height;
    AOR(width,height);
    return 0;
}