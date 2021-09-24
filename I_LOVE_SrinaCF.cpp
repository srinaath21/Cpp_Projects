#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr{};
    int n{}, max{}, min{}, max_count{}, min_count{};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    min = arr.at(0);
    max = arr.at(0);
    for(int i=0; i<n; i++)
    {
        if(max<arr.at(i))
        {
            max_count++;
            max = arr.at(i);
        }
        if(min>arr.at(i))
        {
            min_count++;
            min = arr.at(i);
        }
    }
    cout<<min_count+max_count;
}