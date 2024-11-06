#include<bits/stdc++.h>
using namespace std;
int f(int ind,int wt,vector<int> &weight,vector<int> &cost)
{
    if(ind==0)
    {
        if(weight[ind] <= wt) return cost[ind];
        else return INT_MAX;

        int notake=0 + f(ind-1,wt,weight,cost);
        int take=INT_MIN;
        if(weight[ind] <=wt ) take=cost[ind] + f(ind-1,wt-weight[ind],cost);

        return max(notake,take);
    }
}
int 
int main()
{
    

}