#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    int drr[]= {40,20,30,10,30};
    int s=sizeof(drr)/sizeof(drr[1]);
    int M[s-1][s-1];
    int S[s-1][s-1];
    s=s-1;
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            M[i][j]=0;
            S[i][j]=0;
        }
    }
    for(int l=1; l<s; l++)
    {
        for(int i=0; i<s-l; i++)
        {
            int j=i+l;
            M[i][j] = MAX;
            for(int k=i; k<j; k++)
            {
                int x=M[i][k]+M[k+1][j]+drr[i]*drr[k+1]*drr[j+1];
                if(M[i][j] > x)
                {
                    M[i][j]=x;
                    S[i][j]=k;
                }
            }
        }
    }

    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            cout<<S[i][j]<<" ";
        }
        cout<<endl;
    }
}
