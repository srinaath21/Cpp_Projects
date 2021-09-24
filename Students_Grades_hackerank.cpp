#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr{};
    int n{},val{};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        val = (arr.at(i)+5)%5;
        if((val==3 || val==4) && arr.at(i)>=35)
        {
            arr.at(i) = (arr.at(i)+5)-val;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr.at(i)<<endl;
    }
}
// EXCELLENT WORK !!!!!!!!!