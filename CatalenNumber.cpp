#include<bits/stdc++.h>
using namespace std;
int C[1000];
int main()
{
    int n;
    cin>>n;
    C[0]=1;
    C[1]=1;
    C[2]=2;
    for(int i=3; i<=n; i++)
    {
      C[i]=0;
      for(int j=0;j<i;j++)
      {
      C[i]=C[i]+C[j]*C[i-j-1];
      }
    }
    cout<<C[n]<<endl;

}
