#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1{}, s2{};
    cin>>s1>>s2;
    for(int i; i<s1.size(); i++)
    {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
       if(s1!=s2)
        {
            if(s1>s2)
                cout<<"1";
            else 
                cout<<"-1";
        }
        else 
            cout<<"0";
}