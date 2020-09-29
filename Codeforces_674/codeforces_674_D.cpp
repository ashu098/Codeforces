#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	ll n;
	cin>>n;
	
	ll a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	unordered_map<ll,ll> m;
	m[0] = 1;
	ll x=0,ans=0;
	
	for(int i=0;i<n;i++) {
		x += a[i];
		
		if(m.find(x) != m.end()) {
			ans++;
			m.clear();
			m[0]++;
			x = a[i];
		}
		m[x]++;
	}
	
	cout<<ans<<"\n";
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


