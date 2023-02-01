#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long int n;
	cin>>n;
	vector<int> vec;
	while(n!=0){
		int r=n%10;
		vec.push_back(r);
		n=n/10;
	}
	reverse(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++){
		if(i==0){
			if(vec[i]>4 and vec[i]!=9){
				vec[i]=9-vec[i];
			}
		}
		else{
			if(vec[i]>4){
				vec[i]=9-vec[i];
			}
		}
	}
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i];
	}
	return 0;
}