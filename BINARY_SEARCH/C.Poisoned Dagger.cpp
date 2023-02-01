#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
	
	ll t;
	cin>>t;
	while(t>0){
		ll n,h;
		ll f=0;
		cin>>n>>h;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		ll low=0;
		ll high=n+h;
		while(low<=high){
			ll mid=low+(high-low)/2;
			ll sum=0;
			for(int i=0;i<n-1;i++){
				sum=sum+min(arr[i+1]-arr[i],mid);
			}
			sum=sum+mid;
			if(sum==h) {
				cout<<low+1<<endl;
				f=1;
				break;
			}
		  else if(sum<h) low=mid+1;
			else high=mid-1;
			
		}
	if(f==0)	cout<<high+1<<endl;
		t--;
	}
	
	return 0;
}