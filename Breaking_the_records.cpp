#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n{}, min{}, max{}, minc{}, maxc{};
    vector<int> arr{};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    min = arr.at(0);
    for(int i=0; i<n; i++)
    {
        
        if(min>arr.at(i))
            {
                minc++;
                min = arr.at(i);
            }
    }
    max = arr.at(0);
    for(int i=0; i<n; i++)
    {
        if(max<arr.at(i))
            {
                maxc++;
                max = arr.at(i);
            }

    }
    cout<<maxc<<" "<<minc;
}