#include<iostream>
#include<string>
#include<vector>

using namespace std;
int  main()
{
    vector<int> arr{};
    string ch{};
    int len{};
    getline(cin,ch);
    for(auto d: ch)
    {
        if(d!=',')
            cout<<d<<endl;
    }
}