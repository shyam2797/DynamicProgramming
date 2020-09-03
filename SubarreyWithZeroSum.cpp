#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {4,2,-3,-1,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arrsum[n][n];
    arrsum[0][0]=arr[0];
    for(int i=1; i<n; i++)
    {
        arrsum[0][i]=arrsum[0][i-1]+arr[i];
    }
    for(int i=1; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            arrsum[i][j]=arrsum[i-1][j]-arrsum[i-1][i-1];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arrsum[i][j]==0)
            {

               cout<<"Subset is ["<<i<<" to"<<j<<"]";
            }

        }
        cout<<endl;
    }
}
