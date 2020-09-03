#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1="ACADACA";
    string str2="CADADA";
    int l1=str1.length();
    int l2=str2.length();
    int arr[l1][l2];
    if(str1[0]==str2[0])
        arr[0][0]=1;
    else
        arr[0][0]=0;
    for(int i=1; i<l2; i++)
    {
        if(arr[0][i-1] || str1[0]==str2[i])
        {
            arr[0][i]=1;
        }
        else
        {
            arr[0][i]=0;
        }
    }
    for(int i=1; i<l1; i++)
    {
        if(arr[i-1][0] || str1[i]==str2[0])
        {
            arr[i][0]=1;
        }
        else
        {
            arr[i][0]=0;
        }
    }
    for(int i=1; i<l1; i++)
    {
        for(int j=1; j<l2; j++)
        {
            if(str1[i]==str2[j])
            {
                arr[i][j]=arr[i-1][j-1] + 1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
    }
    int max=-1;
    for(int i=0; i<l1; i++)
    {
        for(int j=0; j<l2; j++)
        {
            if(arr[i][j]>max)
            max=arr[i][j];

        }
    }
    cout<<max<<endl;

}
