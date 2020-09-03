#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[]= {2,4,6,3,9,8,5};
    int v[]= {3,4,9,7,6,5,4};
    int Size=sizeof(s)/sizeof(s[0]);
    int S=15;
    int M[Size][S+1];
    for(int i=0; i<=S; i++)
    {
        if(i<s[0])
            M[0][i]=0;
        else
            M[0][i]=v[0];
    }
    for(int i=1; i<Size; i++)
    {
        for(int j=0; j<=S; j++)
        {
            if(j-s[i]>=0)
            {
                M[i][j]=M[i-1][j]>(M[i-1][j-s[i]]+v[i])?M[i-1][j]:(M[i-1][j-s[i]]+v[i]);
            }
            else
            {
                M[i][j]=M[i-1][j];
            }
        }
    }

    cout<<M[Size-1][S]<<endl;
    cout<<endl;
}
//comments
