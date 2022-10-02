#include<bits/stdc++.h>
using namespace std;
int n,x,a[50],dp[300050],pre;//dp数组容量1e4*30组 
int main()
{
	dp[0]=1;
	cin>>n>>x;
	for(int i=0;i<n;i++)cin>>a[i],pre+=a[i];//pre最大容量 
	for(int i=0;i<n;i++)
	{
		for(int j=pre;j>=a[i];j--)
		{
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);//01背包 
		}
	}
	for(int i=x;i<=pre;i++)
	{
		if(dp[i]>=x)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
