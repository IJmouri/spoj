#include<bits/stdc++.h>
using namespace std;
int v[10000000];
int sum(int n)
{
    int r,s=0;
     r=0;
     while(n!=0)
        {

            r=n%10;
             n=n/10;
            s=s+r*r;
        }
        return s;
}
int main()
{
    int r,n,s=0,c=0,l=0;
    memset(v,-1,sizeof v);
    scanf("%d",&n);
    while(s!=1)
    {
        s=sum(n);
        if(v[s]==-1)
        {
            if(s!=0)
            {

                v[s]=1;
                c++;
                n=s;
            }
             else
                n = n / 10;
        }

        else
        {
            printf("-1\n");
            l=1;
            break;
        }

    }
    if(l==0)
        printf("%d\n",c);
}
