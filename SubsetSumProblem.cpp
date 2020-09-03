#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {7,3,2,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=6;
    int arr1[n+1][sum+1];

    for(int i=0; i<=sum; i++)
        arr1[0][i]=0;

    for(int i=0; i<=n; i++)
        arr1[i][0]=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sum; j++)
        {
            if(arr1[i-1][j] || ((j-arr[i-1]>=0) && arr1[i-1][j-arr[i-1]]))
                arr1[i][j]=1;
            else
                arr1[i][j]=0;
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    if(arr1[n][sum])
        cout<<"Sum Exist"<<endl;
    else
        cout<<"Sum not exist:"<<endl;
}
