#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
int ar[100009];
int main()
{
    int len,i,j,n,l,c=0;
    string s;
    map<int,string>mp;
    sf("%d",&n);
    for(i=0; i<n; i++)
    {
        cin>>s;
        ar[i]=s.length();
        mp[ar[i]]=s;
    }
    sort(ar,ar+n);
    string s1=mp[ar[n-1]],s2;
    for(i=0; i<n-1; i++)
    {
        l=mp[ar[i]].length();
        s2=s1.substr(0,l);
        if(s2==mp[ar[i]])
        {
            c++;
        }
    }
    if(c==n-1)
        printf("%d\n",mp[ar[n-1]].length());
    else
        pf("Impossible\n");
}
