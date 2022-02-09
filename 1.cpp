#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,x,y;
        cin>>p>>q;
        cin>>x>>y;
        if(p+q >= x+y)
            cout<<x+y<<endl;
        if(x+y > p+q)
            cout<<p+q<<endl;
    }
    return 0;
}