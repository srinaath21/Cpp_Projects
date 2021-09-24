#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int s{}, t{}, a{}, b{}, m{}, n{}, av{}, ov{};
    vector<int> app{}, orn{}, crd1{}, crd2{};
    cin>>s>>t>>a>>b>>m>>n;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        app.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        orn.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        crd1.push_back(a+(app.at(i)));
        if(crd1.at(i)>=s&&crd1.at(i)<=t)
            av++;      
    }
    for(int i=0; i<n; i++)
    {
        crd2.push_back(b+(orn.at(i)));
        if(crd2.at(i)>=s&&crd2.at(i)<=t)
            ov++;      
    }
    cout<<av<<endl;
    cout<<ov<<endl;
}