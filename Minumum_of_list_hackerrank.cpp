#include<iostream>
using namespace std;
int main()
{
    int s[10]{};
    int n;
    cout<<"Enter the number of values to be added to the list : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Value "<<i<<" : ";
        cin>>s[i];
    }
    int min = s[1];
    for(int j=1;j<=n;j++)
    {
        if(min>s[j])
            min=s[j];
    }
cout<<"The minimum value in the list of numbers that were entered is : "<<min;
}