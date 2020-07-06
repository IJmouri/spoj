#include<bits/stdc++.h>
using namespace std;
int v[10000000];
int fun (int n)
{
    int ans = 0;
    int res = 0;
    while(n > 0)
    {
        res = n%10;
        ans += res * res;
        n /=10;
    }
    return ans;
}
int main()
{
    int r,n,s=0,c=0,l=0;
    scanf("%d",&n);

    while(s!=1)
    {
        s=fun(n);

        ///cout<<s<< endl; /// tmi ekhane print diye dekho 0 ase tmr code ... ami ekta function banaisi jeta 0 k niye kaj korbe na
        if(v[s]==0)
        {
            if(s!=0)
            {
                n = s;
                v[s]=1;
                c++;

            }
            else
                n = n / 10;
        }
        //cout<<s<< endl;
        else
        {
            printf("-1\n");
            l=1;
            break;
        }
        //cout<<s<< endl;

    }
    if(l==0)
        printf("%d\n",c);
}
