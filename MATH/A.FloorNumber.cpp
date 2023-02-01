#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t){
		long int a,b;
		cin>>a>>b;
      if(a<3) cout<<1<<endl;
      else{
      	long int r;
      	a=a-2;
      	if(a%b==0) {
      		r=a/b;
		  }
		else{
			r=a/b;
			r++;
		}
      	r++;
      	cout<<r<<endl;
	  }
		t--;
	}
}