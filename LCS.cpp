// LONGEST COMMON SEQUENCE USING TOP DOWN APPROACH
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x="abcfa";
    string y="abcdafa";
    int m=x.size();
    int n=y.size();
    int t[m+1][n+1];
    memset(t,0,sizeof(t));
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[m-1]==y[n-1])
            t[i][j]=1+t[i-1][j-1];
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    cout<<"length of LCS==>"<<t[m][n];
    

    return 0;
}