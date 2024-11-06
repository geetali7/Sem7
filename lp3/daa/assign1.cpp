#include <bits/stdc++.h>
using namespace std;
int iterativefibo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    int first=0;
    int second=1;
    int fibonum=1;
    for(int i=2;i<=n;i++)
    {
        fibonum=first+second;
        first=second;
        second=fibonum;
    }
    return fibonum;
}
int recurfibo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return recurfibo(n-1) + recurfibo(n-2);  
}
int main()
{
    int n;
    cin>>n;
    cout<<iterativefibo(n)<<endl<<recurfibo(n)<<endl;
}