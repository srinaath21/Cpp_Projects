#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int arr[5][5]{},temp{},cn{};
    for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                cin>>arr[i][j];
            }
        }
        int n=0;
    while(n<5)
    {
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                if(arr[i][j]==1)
                { 
                    if((i<2&&j<2)||(i>2&&j<2))
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i][j+1];
                        arr[i][j+1] = temp;
                        cn++;
                    }
                    if((i<2&&j>2)||(i>2&&j>2))
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i][j-1];
                        arr[i][j-1] = temp;
                        cn++;
                    }
                    // if(i>2&&j<2)
                    // {
                    //     temp = arr[i][j];
                    //     arr[i][j] = arr[i][j+1];
                    //     arr[i][j+1] = temp;
                    //     cn++;
                    // }
                    // if(i>2&&j>2)
                    // {
                    //     temp = arr[i][j];
                    //     arr[i][j] = arr[i][j-1];
                    //     arr[i][j-1] = temp;
                    //     cn++;
                    // }
                    if(i==2&&j<2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i][j+1];
                        arr[i][j+1] = temp;
                        cn++;
                    }
                    if(i==2&&j>2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i][j-1];
                        arr[i][j-1] = temp;
                        cn++;
                    }
                    if(j==2&&i>2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i-1][j];
                        arr[i-1][j] = temp;
                        cn++;
                    }
                    if(j==2&&i<2)
                    {
                        temp = arr[i][j];
                        arr[i][j] = arr[i+1][j];
                        arr[i+1][j] = temp;
                        cn++;
                    }
                    if(i==2 && j==2)
                    {
                        cout<<cn;
                        exit(0);
                    }
                }
            }
        }
        n++;
    }
}