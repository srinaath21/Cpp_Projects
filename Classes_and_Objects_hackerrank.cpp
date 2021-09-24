#include<iostream>

using namespace std;

class Student
{
    private:
    int arr[10][10],score{},row{},col{};
    
    public:
    void set_val(int a , int b)
    {
        row = a;
        col = b;
    }
    void input()
    {
        for(int i=0; i<row; i++)
        {   
            for(int j=0; j<col; j++)
            {
                cin>>arr[i][j];
            } 
        }
    }
    void output()
    {
        int sum[10]{},count{};
        for(int i=0; i<row; i++)
        {   
            sum[i] = 0;
            for(int j=0; j<col; j++)
            {
                sum[i] = sum[i] + arr[i][j];
            }
        }
        for (int i = 0; i<row; i++)
        {
            if (sum[0]<sum[i+1])
                count++;
        }
        cout<<count;
    }
};
int main()
{
    Student kris;
    int num{},sub=5;
    // cout<<"enter the number of students : ";
    cin>>num;
    kris.set_val(num, sub);
    kris.input();
    kris.output();
}