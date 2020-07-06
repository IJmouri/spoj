#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
int main()
{
    long long int a,b,n1,n2,s,s1,a1,s2;
    sf("%lld%lld",&a,&b);
    if((a+b)%2==0)
    {
        s1=(b*(b+1))/2.0;
        n1=a-1;
        s2=(n1*(2*b+n1-1))/2.0;

        s=s1+s2;
        cout<<s<<endl;
    }
    else
    {
        if(b==1)
        {
            s=(a*(a+1))/2.0;
            cout<<s<<endl;
        }
        else
        {
            n1=b-2;
            n2=a-1;
            a1=b+1;
            s1=(n1*(n1+1))/2.0;
            s2=(n2*(2*a1+n2-1))/2.0;
            s=s1+s2+b;
            cout<<s<<endl;
        }
    }
}
