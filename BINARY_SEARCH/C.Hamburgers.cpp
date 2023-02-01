#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	string str;
	cin>>str;
	ll x,y,z;
	cin>>x>>y>>z;
	ll p1,p2,p3;
	cin>>p1>>p2>>p3;
	ll r;
	cin>>r;
	ll a=0,b=0,c=0;
	for(auto &ch:str){
	if(ch=='B') a++;
	else if(ch=='S') b++;
	else c++;	
	}
	//cout<<"print"<<a<<b<<c<<endl;
	ll low=0;
	ll high=r+200;
	while(low<=high){
		ll mid=low+(high-low)/2;
		ll h=0;
		ll r1=max(mid*a - x,h);
		ll r2=max(mid*b - y,h);
		ll r3=max(mid*c - z,h);
		ll price=r1*p1+r2*p2+r3*p3;
		if(price<=r) low=mid+1;
		else{
			high=mid-1;
		}
	}
	cout<<high<<endl;
	
	
	return 0;
}