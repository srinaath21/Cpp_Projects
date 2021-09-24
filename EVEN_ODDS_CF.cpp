#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n{},k{};
    cin>>n;
    cin>>k;
    if(k<=(n+1)/2)
    {
        cout<<k*2 -1;
    }
    else
    {
        cout<<(k-(n+1)/2)*2;
    }
}