#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n{}, k{}, l{}, c{}, d{}, p{}, nl{}, np{}, v{}, v1{}, v2{}, v3{}, min{};
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    v = k*l;
    v1 = (v/n)/n;
    v2 = (c*d)/n;
    v3 = (p/np)/n;
    if(v1<v2&&v1<v3)
        min = v1;
    else if(v2<v1&&v2<v3)
        min = v2;
    else 
        min = v3;
    cout<<min;
}