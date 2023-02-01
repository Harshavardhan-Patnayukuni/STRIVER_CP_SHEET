/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
	ll a,b;
	cin >> a >> b;
	bool arr[b+1];
	memset(arr,true,sizeof(arr));
	arr[0]=false;
	arr[1]=false;
	for(ll i=2;i*i<=b;i++){
		if(arr[i]==true){
			for(ll j=i*i;j<=b;j=j+i){
				arr[j]=false;
			}
		}
	}
	
	for(ll i=a;i<=b;i++){
	if(arr[i]==true) cout<<i<<endl;	
	}
	cout<<endl;
	return ;
}
int main(){
	ll t;
	cin >>t;
  for(ll i=0;i<t;i++)solve();
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isprime(int n){
	if(n<2) return false;
	else if(n==2) return true;
	else if(n%2==0) return false;
	else {
		for(ll i=3;i*i <=n;i=i+2) {
			if(n%i==0) return false;
		}
		return true;
	}
}
int main(){
	ll t;
	cin >>t;
	while(t>0){
	ll a,b;
	cin >>a>>b;
	for(int i=a;i<=b;i++){
		if(isprime(i)==true) cout<<i<<endl;
	}
	t--;
}
	return 0;
}
