#include <bits/stdc++.h>
using namespace std;

int p[5005] , r[5005];

void init (int n)
{
    for(int i = 1; i <= n; i++)
    {
        p[i] = i;
       r[i] = 1;
    }
}
//bool myfn(int i, int j) { return i<j; }

int findp (int n)
{
    if(p[n] == n) return n;
    else return p[n] = findp(p[n]);
}

void joint(int a , int b)
{

       p[a] = b ;
            r[b]+=r[a] ;

}


int main()
{
    int C,R,j,k;
    char x[105];


    while(scanf("%d %d", &C, &R)==2 &&C){

        init(C);
        map<string, int> M;

        for(int i = 1; i <=C; i++) {
            scanf("%s",x ), M[x] = i;
        }
        for(int i = 1; i <=R; i++) {
            scanf("%s", x);
            j = M[x];

            scanf("%s", x);
            k = M[x];
            int x=findp(j);
            int y=findp(k);

            if( x!= y)
            joint(x, y);
        }

        int ans=0;
        for(int i=1; i<=C; i++)
        {
            if(r[i] > ans)
                ans = r[i];
        }
    printf("%d\n",ans);

    }
    return 0;


}
