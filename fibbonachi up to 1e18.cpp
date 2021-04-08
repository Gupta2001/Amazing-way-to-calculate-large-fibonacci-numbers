
// Problem : Fibonacci Numbers
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1722
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#include<set>
#define lli long long int
#define pb push_back
#define rep(i,a,n) for(lli i=a;i<n;i++)
#define all(v) (v.begin(),v.end())
#define ppb pop_back
#define sz(v) v.size()
#define pi 3.141592653589793238
#define fr first;
#define sc second
#define ins insert
using namespace std;
map<lli,lli>ma;
lli mod=1e9+7;
lli fb(lli n){
	if(ma.count(n)) return ma[n];
	lli k;
	k=n/2;
	if(n&1) ma[n]=(fb(k)*fb(k+1)+fb(k-1)*fb(k))%mod;
	else ma[n]=(fb(k)*fb(k)+fb(k-1)*fb(k-1))%mod;
	return ma[n];
}
int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	
	lli t,n;
	ma[0]=1;ma[1]=1;
	cin>>n;
	if(n==0) cout<<0<<endl;
	else
	cout<<fb(n-1);
	
	
	return 0;
}