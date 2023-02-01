#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,salt,nl,np;
	cin>>n>>k>>l>>c>>d>>salt>>nl>>np;
	int drink=k*l;
	int slices=c*d;
	int a=drink/nl;
	int b=salt/np;
	int r;
	r=min(slices,min(a,b));
	int ans=r/n;
	cout<<ans<<endl;
	return 0;
}