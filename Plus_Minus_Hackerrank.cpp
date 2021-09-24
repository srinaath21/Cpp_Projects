#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int negval{}, posval{}, zero{},n{};
    double fp{},fn{},fz{};
    vector<int> arr{};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int y{};
        cin>>y;
        arr.push_back(y);
    }
    for(int i=0; i<n; i++)
    {
        if(arr.at(i)>0)
            posval++;
        else if(arr.at(i)<0)
            negval++;
        else if(arr.at(i)==0)
            zero++;
        else
            break;
    }
    cout<<"No. of positive values : "<<posval<<endl;
    cout<<"No. of negative values : "<<negval<<endl;
    cout<<"No. of zeros : "<<zero<<endl;
    fp = (double)posval/(double)n;
    fn = (double)negval/(double)n;
    fz = (double)zero/(double)n;
    cout<<"fraction of positive values : "<<fp<<endl;
    cout<<"fraction of negative values : "<<fn<<endl;
    cout<<"fraction of zeros : "<<fz<<endl;
}