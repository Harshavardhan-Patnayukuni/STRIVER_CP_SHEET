#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool prime[90000001];
int n=90000000;
vector<int> v;
void solve(){
	for(int i=2;i*i <=n;i++ ){
		if(prime[i]==false){
			for(int j=i*i;j<=n;j=j+i){
				prime[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(prime[i]==false) v.push_back(i);
	}
}
int main(){
	solve();
	long long int t;
	cin>> t;
	while(t){
		long long int n;
		cin >>n;
		cout<<v[n-1]<<endl;
		t--;
	}
	return 0;
}