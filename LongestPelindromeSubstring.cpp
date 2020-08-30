#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {5,3,2,6,4,4,6,2,1,2,1,2,1,2,1,2,1,2};
    int Size=sizeof(arr)/sizeof(arr[0]);
    int S[Size][Size],Max=1;
    for(int i=0; i<Size; i++)
    {
        S[i][i]=1;
    }
    for(int i=0; i<Size-1; i++)
    {
        if(arr[i]=arr[i+1])
        {
            S[i][i+1]=1;
            Max=2;
        }
        else
        {
        S[i][i+1]=0;
        }
    }
    for(int k=2; k<Size; k++)
    {
        for(int i=0; i<Size-k; i++)
        {
            int j=i+k;
            if(arr[i]==arr[j] && S[i+1][j-1])
            {
                S[i][j]=1;
                Max=k+1;
            }
            else
            {
            S[i][j]=0;
            }
        }
    }
    cout<<Max<<endl;
    return 0;
}
