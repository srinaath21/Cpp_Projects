#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> arr{};
    int n{};
    string values{};
    cout<<"enter the number of values to be entered : ";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        if(i!=0)
            cout<<"Name "<<i<<" : ";
        getline(cin,values);
        arr.push_back(values);
    }
    for(int j=0; j<arr.size(); j++)
    {
        cout<<arr.at(j)<<endl;
    }
    return 0;
}