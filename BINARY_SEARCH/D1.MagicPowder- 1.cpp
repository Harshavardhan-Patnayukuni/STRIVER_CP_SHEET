#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	ll has[n];
	for(ll i=0;i<n;i++){
		cin>>has[i];
	}
//	cout<<"yes"<<endl;
	ll low=0;
	ll high=k+1000;
	while(low<=high){
		ll mid=low+(high-low)/2;
		ll sum=0;
		for(ll i=0;i<n;i++){
			ll h=0;
			sum=sum+max(h,mid*arr[i] -has[i]);
		}
		if(sum<=k) low=mid+1;
		else{
			high=mid-1;
		}
	}
	
	cout<<high<<endl;
	return 0;
}