#include<iostream>
#include<string.h>
#include<string>


using namespace std;

int main()
{
    int n{},nc{},uc{},lc{},sc{},t{},s{},x{};
    char pass[100]{},*str{pass};
    string num = "0123456789", l_c = "abcdefghijklmnopqrstuvwxyz", u_c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", s_c = "@#$%^&*()-+";
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>pass[i];
    // for(int i=0; i<n; i++)
    // {
    //     cout<<*(str+i)<<endl;
    // }
    for(int i=0; i<n; i++)
    {
        if(isdigit(pass[i]))
            nc++;
        for(int j=0; j<(u_c.length()+num.length()+s_c.length()); j++)
        {
            
            if(*(str+i)==u_c[j])
                uc++;
            if(*(str+i)==l_c[j])
                lc++;
            if(*(str+i)==s_c[j])
                sc++;
        }
    }
    //cout<<"number count : "<<nc<<"\nlower case count : "<<lc<<"\nupper case count : "<<uc<<"\nspecial case count : "<<sc<<endl;
    if(nc==n||lc==n||uc==n||sc==n)
        {

            if(n==4||n==5)
                {
                    t = 3;
                    cout<<t;
                    exit(0);
                }
            else 
                {
                    t = 6-n;
                    cout<<t;
                    exit(0);
                }
        }
    if(n<6)
    {
        if((nc==0&&lc==0)||(nc==0&&uc==0)||(nc==0&&sc==0)||(uc==0&&lc==0)||(uc==0&&sc==0)||(sc==0&&lc==0))
           {
               s = (6-n);  
               cout<<s; 
           }
        else if(nc==0||lc==0||uc==0||sc==0)
            {
                x = (6-n);
                cout<<x;
            }
    }
    if(n>=6)
    {
        if(nc==0||lc==0||uc==0||sc==0)
            {
                x++;
                cout<<x;
            }
        else if((nc==0&&lc==0)||(nc==0&&uc==0)||(nc==0&&sc==0)||(uc==0&&lc==0)||(uc==0&&sc==0)||(sc==0&&lc==0))
           {
               s = (6-n);  
               cout<<s; 
           }
    }
}