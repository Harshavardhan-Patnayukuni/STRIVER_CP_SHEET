#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
	int n;
	cin >>n;
  int arr[n];
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  }	
  int count=1;
  int maxi=INT_MIN;
  for(int i=1;i<n;i++){
  	if(arr[i]>arr[i-1]) {
  		count++;
	  }
	  else{
	  	maxi=max(maxi,count);
	  	count=1;
	  }
  }
  maxi=max(maxi,count);
  cout<<maxi<<endl;
}
int main(){	
  solve();
	return 0;
}