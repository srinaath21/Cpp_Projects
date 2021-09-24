#include<sstream>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    string s ;
    int nums{},count{};
    string ch{},num{};
    getline(cin,s);
    nums = s.length();
    for(int i=0; i<s.length(); i++)
    {
        if(s!=",")
        {
            num = s[i];
            nums = stoi(num);
            cout<<nums<<endl;
        }
        
    }
}
