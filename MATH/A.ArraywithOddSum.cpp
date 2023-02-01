#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		int arr[n];
		int sum=0;
		int even=0;
		int odd=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==0 and even==0) even=1;
			if(arr[i]%2==1 and odd==0) odd=1;
			sum=sum+arr[i];
		}
		if(sum%2==0){
		   if(even==0 or odd==0){
		   	cout<<"NO"<<endl;
		   }	
		   else{
		   	cout<<"YES"<<endl;
		   }
		}
		else{
			cout<<"YES"<<endl;
		}
		
		t--;
	}
}