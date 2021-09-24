#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a1{}, a2{}, a3{};
    int n{}, m{}, count{}, max{};
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a1.push_back(x);
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        a2.push_back(x);
    }
    for (int a=0; a<n; a++)
    {
        for(int b=0; b<m ; b++)
        {
            if(a2.at(b)%a1.at(a)==0)
                a3.push_back(a2.at(b)/a1.at(a));
        }
    }
    sort(a3.begin(),a3.end());
    max = a3.at(a3.size()-1);
    for (int i = 0; i<a3.size(); i++)
    {
        if(max == a3.at(i)) 
            count++;
    }
    cout<<count;
}