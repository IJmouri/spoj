#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int k,a,b,c,d,e,f,g,j,t,q;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d",&q);
        cin>>s;
        a=0,b=0,c=0,d=0,e=0,f=0,g=0,j=0;
        for(int i=0; i<s.length()-2; i++)
        {
            s1=s.substr(i,3);
            if(s1=="TTT")
                a++;
            if(s1=="TTH")
                b++;
            if(s1=="THT")
                c++;
            if(s1=="THH")
                d++;
            if(s1=="HTT")
                e++;
            if(s1=="HTH")
                f++;
            if(s1=="HHT")
                g++;
            if(s1=="HHH")
                j++;

        }
        printf("%d %d %d %d %d %d %d %d %d\n",k,a,b,c,d,e,f,g,j);
    }
}


