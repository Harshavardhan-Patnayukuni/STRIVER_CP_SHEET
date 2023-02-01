#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void bfs(vector<vector<int>> &arr,int n ,int m,int a,int b,int x,ll k,int &count){
	if(a>=n or b>= m) return;
	if(x ^ arr[a][b] ==k and a==n-1 and b== m-1){
		count++; cout<<"yes"<<endl;
	} 
	bfs(arr,n,m,a+1,b,x ^ arr[a][b],k,count);
	bfs(arr,n,m,a,b+1,x ^ arr[a][b],k,count);
}


void solve() {
    int m,n;
    cin>> n; 
	cin >> m ;
    ll k;
    cin>>k;
    int count=0;
    vector<vector<int>> arr(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>> arr[i][j];
		}
	}
	bfs(arr,n,m,0,0,0,k,count);
	
	cout <<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    
    for (int t = 1; t <= tc; t++) {
    	 solve();
    }
    
}