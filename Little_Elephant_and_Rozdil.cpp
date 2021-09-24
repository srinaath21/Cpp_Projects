#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<long int> a{};
    long int n{}, min{}, count{}, ind{};
    cin>>n;
    for(long int i=0; i<n; i++)
    {
        long int x;
        cin>>x;
        a.push_back(x);
    }
    min = a.at(0);
    for(long int i=0; i<n; i++)
    {
        if(min>=a.at(i)||n==1)
        {
            min = a.at(i);
            ind = i+1;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a.at(ind-1)==a.at(i))
            count++;
    }
    if(count>1)
        cout<<"Still Rozdil";
    else
        cout<<ind;
}
