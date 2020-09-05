#include<bits/stdc++.h>
using namespace std;
int main()
{
    int price[]= {1,5,8,9,10,17,17,20};
    int Size=sizeof(price)/sizeof(price[0]);
    int T[Size];
    T[0]=price[0];
    for(int i=1; i<Size; i++)
        T[i]=0;
    for(int i=0; i<Size; i++)
    {
        int max=price[i];
        for(int j=i-1; j>=0; j--)
        {
            if(max < T[j]+price[i-j-1])
            {
                max=T[j]+price[i-j-1];
            }
            T[i]=max;
        }
    }
    for(int i=0; i<Size; i++)
        cout<<T[i]<<" ";

}
