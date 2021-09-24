#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long int a[100][100], n{}, sum1{}, sum2{}, result{};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
          cin>>a[i][j];   
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
          if(i==j)
          {
              sum1 += a[i][j];
          }
          if(i+j==n-1)
          {
              sum2 +=a[i][j];
          }   
        }
    }
    if(sum1 < sum2)
        result = sum2 - sum1;
    else
        result = sum1 - sum2;
    cout<<result<<endl;
}