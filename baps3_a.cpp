#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.length()==1)
        cout<<s<<endl;
    else if(s.length()==2)
    {
        if(s[0]=='1')
        {
            cout<<"1"<<endl;
        }
        else if(s[0]=='2')
        {
            if(s[1]=='9')
            cout<<"2"<<endl;
            else
                cout<<"1";
        }
        else if(s[0]=='3')
        {
            if(s[1]=='9')
                cout<<"3"<<endl;
            else
                cout<<"2"<<endl;
        }
        else if(s[0]=='4')
        {
            if(s[1]=='9')
                cout<<"4"<<endl;
            else
                cout<<"3"<<endl;
        }
        else if(s[0]=='5')
        {
            if(s[1]=='9')
                cout<<"5"<<endl;
            else
                cout<<"4"<<endl;
        }
        else if(s[0]=='6')
        {
            if(s[1]=='9')
                cout<<"6"<<endl;
            else
                cout<<"5"<<endl;
        }
        else if(s[0]=='7')
        {
            if(s[1]=='9')
                cout<<"7"<<endl;
            else
                cout<<"6"<<endl;
        }
         else if(s[0]=='8')
        {
            if(s[1]=='9')
                cout<<"8"<<endl;
            else
                cout<<"7"<<endl;
        }
         else if(s[0]=='9')
        {
            if(s[1]=='9')
                cout<<"9"<<endl;
            else
                cout<<"1"<<endl;
        }
    }
    else
        cout<<"1"<<endl;
    return 0;
}
