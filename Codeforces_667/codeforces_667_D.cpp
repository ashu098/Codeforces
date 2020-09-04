#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

string tos(ll n) {
	string s;
	while(n>0) {
		s += n%10 + '0';
		 n /= 10;
	}
	
	reverse(s.begin(),s.end());
	
	return s;
}

ll pow(int x) {
	ll ans=1;
	for(int i=1;i<=x;i++) {
		ans = ans*10;
	}
	
	return ans;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--) {
		ll n,s1;
		cin>>n>>s1;
		
		string s = tos(n);
		
		ll sum=0;
		for(auto it:s) {
			sum += it-'0';
		}
		
		if(sum <= s1) {
			cout<<0<<"\n";
			continue;
		}
		
		ll ans=0;
		
		for(int i=1;i<=18;i++) {
			ll po = pow(i);
			ll last_digit = n%po;
			ll dif = (po-last_digit)%po;
			
			ans += dif;
			n += dif;
			
			string s = tos(n);
		
			ll sum=0;
			for(auto it:s) {
				sum += it-'0';
			}
			
			if(sum <= s1) {
				cout<<ans<<"\n";
				break;
			}
		}
	}
	
	return 0;
}

