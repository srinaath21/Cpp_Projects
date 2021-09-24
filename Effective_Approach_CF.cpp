#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n{}, m{}, sum1{}, sum2{};
    cin>>n;
    vector<int> a1{};
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a1.push_back(x);
    }

    cin>>m;
    vector<int>a2{};
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        a2.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a1.at(i)==a2.at(j))
            {
                sum1 = sum1 + (i+1);
                sum2 = sum2 + (n-i);
            }
        }
    }

    cout<<sum1<<" "<<sum2;
}