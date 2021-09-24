#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int *num_ptr {nullptr};
    size_t size{};
    cin>>size;
    num_ptr = new int[size];
    cout<<num_ptr<<endl;
    delete [] num_ptr;
    cout<<num_ptr;
}