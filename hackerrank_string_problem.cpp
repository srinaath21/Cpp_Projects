#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    int a{}, b{}, a_len{}, b_len{};
    vector<string> word{};
    string values{},k{} , l{}, t{};
    for(int i=0; i<2; i++)
    {
        getline(cin,values);
        word.push_back(values);
    }
    k = word.at(0);
    l = word.at(1);
    a_len = k.size();
    b_len = l.size();
    cout<<a_len<<" "<<b_len<<endl<<k+l<<endl;
    t = k.at(0);
    k.at(0) = l.at(0);
    l.at(0) = t.at(0);
    cout<<k<<" "<<l;

}
