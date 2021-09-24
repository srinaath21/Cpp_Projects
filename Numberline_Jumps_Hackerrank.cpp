#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int> arr{};
    long int x1{},v1{},x2{},v2{};
    cin>>x1>>v1>>x2>>v2;
    for(long int i=0; i<10000; i++)
    { 
        x1 = x1+v1;
        x2 = x2+v2;
        if(x1==x2)
            {
                cout<<"YES";
                break;
            }   
    }
    if(x1!=x2)
        cout<<"NO";
}