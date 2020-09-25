#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		
		int a[n],b[n];
		
		set<int> s;
		
		for(int i=0;i<n;i++) {
			cin>>a[i];
			s.insert(a[i]);
			b[i] = a[i];
		}
		
		sort(b,b+n);
		
		int f=0;
		
		for(int i=0;i<n;i++) {
			if(b[i] != a[i]) {
				f = 1;
			}
		}
		
		if(f == 0) {
			cout<<"YES\n";
			continue;
		}
		
		f=0;
		
		for(int i=n-1;i>=0;i--) {
			if(b[i] != a[n-i-1]) {
				f = 1;
			}
		}
		
		if(s.size() == n && f == 0) {
			cout<<"NO\n";
			continue;
		}
		
		
		cout<<"YES\n";
		
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


