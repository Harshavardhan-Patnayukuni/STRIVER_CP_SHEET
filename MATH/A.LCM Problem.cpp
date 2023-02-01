#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t){
		long int a,b;
		cin>>a>>b;
      if(b>=(2*a)) cout<<a<<" "<<2*a<<endl;
		else { cout<<-1<<" "<<-1<<" "<<endl;
		} 
		t--;
	}
}