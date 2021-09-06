#include<iostream>
using namespace std;
void wordno();
void loop();
void wordno(int a)
{
    switch (a)
    {
        case 1: cout<<"one"<<endl;break;
        case 2: cout<<"two"<<endl;break;
        case 3: cout<<"three"<<endl;break;
        case 4: cout<<"four"<<endl;break;
        case 5: cout<<"five"<<endl;break;
        case 6: cout<<"six"<<endl;break;
        case 7: cout<<"seven"<<endl;break;
        case 8: cout<<"eight"<<endl;break;
        case 9: cout<<"nine"<<endl;break;
        default :
        {
            if(a>9)
            {
                if(a%2==0)
                    cout<<a<<": even "<<endl;
                else
                    cout<<a<<": odd "<<endl;
            }
        }
    }
}
void loop(int a, int b)
{

    for(int i=a;i<=b;i++)
    {
        wordno(i);
    }
}
int main()
{
    int a,b;
    cout<<"enter the numbers :";
    cin>>a>>b;
    loop(a,b);
}