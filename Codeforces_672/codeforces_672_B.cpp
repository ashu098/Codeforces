#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	ll t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		vector<ll> si(35,0);
		for(int i=0;i<n;i++) {
			ll a;
			cin>>a;
			
			ll x = log2(a);
			si[x]++;
		}
		
		ll ans=0;
		
		for(int i=0;i<=34;i++) {
			if(si[i] > 1) {
				si[i] -= 1;
				ans += (si[i]*(si[i]+1))/2;
			}
						
		}
		
		cout<<ans<<"\n";
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


