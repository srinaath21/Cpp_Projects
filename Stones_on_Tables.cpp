#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n{}, min_count{};
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
            min_count++;
    }
    cout<<min_count;
}