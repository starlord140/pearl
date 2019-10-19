#include<bits/stdc++.h>

using namespace std;
main()
{
    int x=0,n,i,j;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]=='+'||s[1]=='+')
           x++;
        else if(s[0]=='-'||s[1]=='-')
        x--;
    }cout<<x;
}

