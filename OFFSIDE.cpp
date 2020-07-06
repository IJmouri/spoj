#include<bits/stdc++.h>
using namespace std;
int a[15],d[15];
int main()
{
    int i,j,l,n,m;
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)
            break;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<m; i++)
        {
            scanf("%d",&d[i]);
        }
        sort(a,a+n);
        sort(d,d+m);

        if(a[0]<d[1])
        {
            printf("Y\n");
        }
        else
            printf("N\n");
    }
}
