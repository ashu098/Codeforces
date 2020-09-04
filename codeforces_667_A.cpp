#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--) {
		ll a,b;
		cin>>a>>b;
		
		ll s = abs(b-a);
		
		if(s%10 == 0) {
			ll ans = s/10;
			cout<<ans<<"\n";
		}
		else {
			ll ans = s/10 + 1;
			cout<<ans<<"\n";
		}
	}
	
	return 0;
}

