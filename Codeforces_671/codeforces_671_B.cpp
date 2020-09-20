#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

ll po(ll x) {
	ll ans=1;
	
	for(int i=1;i<=x;i++) {
		ans = ans*2;
	}
	
	return ans;
}

void input() {
	int t;
	cin>>t;
	
	map<ll,ll> m;
	
	for(int i=0;i<=30;i++) {
		
		ll x=0,k=0,j=i;
		
		while(j>=0) {
			ll k1 = po(j);
			
			ll k2 = po(k);
			
			x += (k1*k2)*k1;
			
			k+=1;
			j-=1;
		}
		
		m[i] = x;
	}
	
//	for(auto it:m) {
//		cout<<it.first<<" "<<it.second<<"\n";
//	}
	
	while(t--) {
		ll x;
		cin>>x;
		
		ll ans=0;
		for(auto it:m) {
			if((it.second) <= x) {
				x -= it.second;
				ans++;
			}
			else {
				break;
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


