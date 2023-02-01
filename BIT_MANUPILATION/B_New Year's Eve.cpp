#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	
	ll n;
	cin >>n;
	ll k;
	cin >> k;
	
    ll ans=1;
    if(k==1) cout<<n<<endl;
    else{
    	while(n){
    		
    		ans = ans<<1;
    		n = n>>1;
    		
		}
    	cout<<ans-1<<endl;
	}
	return ;
}
int main(){
	solve();
	return 0;
}