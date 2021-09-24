#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> arr{};
    int n{}, max{}, count{};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x{};
        cin>>x;
        arr.push_back(x);
    }
sort(arr.begin(), arr.end());
max = arr.at(n-1);
cout<<max<<endl;   
    for(int i=0; i<n; i++)
    {
        if(max == arr.at(i))
            count++;
    }
    cout<<count;
}