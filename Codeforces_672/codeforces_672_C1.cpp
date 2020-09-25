#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	ll t;
	cin>>t;
	
	while(t--) {
		ll n,q;
		cin>>n>>q;
		
		ll a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		
		ll even=0,odd=0;
		
		for(int i=0;i<n;i++) {
			even = max(even,odd-a[i]);
			odd = max(odd,even+a[i]);
		}
		
		even = max(even,odd);
		
		cout<<even<<"\n";
		
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


