#include<bits\stdc++.h>

using namespace std;

int main()
{
    string s{};
    long int n{},n2{};
    cin>>s;
    for(long int i=0; i<s.size(); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            n++;
        }
    }
    if(n==4||n==7)
    {
        cout<<"YES";
    }
    else 
        cout<<"NO";   
}