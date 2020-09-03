#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[]= {6,7,10,4,5,9,3};
    int v[]= {2,6,9,4,1,5,2};
    int Size=sizeof(s)/sizeof(s[0]);
    int S=20;
    int M[S+1];
    M[0]=0;
    for(int j=1; j<=S; j++)
    {
        int Max=0;
        for(int i=0; i<Size; i++)
        {
            if(j-s[i]>=0)
            {
                int val=M[j-s[i]]+v[i];
                if(Max<val)
                    Max=val;
            }
        }
        if(M[j-1]>Max)
            M[j]=M[j-1];
        else
            M[j]=Max;
    }
    cout<<M[S]<<endl;
    cout<<endl;
}
