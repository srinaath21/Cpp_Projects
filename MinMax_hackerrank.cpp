#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<long int> arr{};
    long int  min_sum{}, max_sum{};
    for(int i=0; i<5; i++)
    {
        int x{};
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for(int i=1; i<5; i++)
    {
        max_sum = max_sum + arr.at(i);
    }
    for(int i=0; i<4; i++)
    {
        min_sum = min_sum + arr.at(i);
    }
    cout<<min_sum<<" "<<max_sum;
}