#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int t;
	cin>>t;
	
	while(t--) {
		ll n,k;
		cin>>n>>k;
		
		vector<pair<ll,ll>> a;
		for(ll i=0;i<n;i++) {
			ll x;
			cin>>x;
			
			a.push_back(make_pair(x,i));
		}
		
		sort(a.begin(),a.end());
		
		vector<int> v1,v2,v3;
		
		if(k%2 == 0) {
			for(int i=0;i<n;i++) {
				if(a[i].first == (k/2)) {
					v3.push_back(a[i].second);
				}
			}
			
			for(auto it:a) {
				if(it.first<(k/2)) {
					v1.push_back(it.second);
				}
				else if(it.first>(k/2)) {
					v2.push_back(it.second);
				}
			}
			
			for(int i=0;i<(v3.size()/2);i++) {
				v1.push_back(v3[i]);
			}
			for(int i=(v3.size()/2);i<v3.size();i++) {
				v2.push_back(v3[i]);
			}
		}
		else {
			for(auto it:a) {
				if(it.first<=(k/2)) {
					v1.push_back(it.second);
				}
				else {
					v2.push_back(it.second);
				}
			}
		}
		
		int ans[n];
		
		for(auto it:v1) {
			ans[it] = 1;
		}
		
		for(auto it:v2) {
			ans[it] = 0;
		}
		
		for(int i=0;i<n;i++) {
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
		
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


