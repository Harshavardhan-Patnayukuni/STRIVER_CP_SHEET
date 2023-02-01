#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
	string str;
	cin >> str;
	string t="QAQ";
	int n=str.size();
	double dp[n+1][4];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++) dp[i][0]=1;
	for(int j=1;j<4;j++) dp[0][j]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<4;j++){
			if(str[i-1]==t[j-1]){
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
			}
			else {
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[n][3]<<endl;
	return ;
}
int main(){
	solve();
	return 0;
}