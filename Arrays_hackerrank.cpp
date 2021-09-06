#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr{};
    int n{},d{};
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>d;
        arr.push_back(d);
    }
    for(int i=n-1; i>=0 ;i--)
    {
        cout<<arr.at(i);
    }
    return 0;
}