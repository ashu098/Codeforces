#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n;
		cin>>n;
		
		ll ans = 10000000000;
		
		for(int i=1;i<=sqrt(n);i++) {
			ll x = i-1,y;
			
			ll n1 = n-i;
			if(x == 0) {
				x += n-1;
				ans = min(ans,x);
				continue;
			}
			if(n1%i) {
				x += n1/i+1;
			}
			else {
				x += n1/i;
			}
						
			ans = min(ans,x);
			
//			cout<<i<<" "<<ans<<"\n";
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


