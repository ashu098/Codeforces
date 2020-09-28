#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int t;
	cin>>t;
	
	while(t--) {
		int n,k;
		cin>>n>>k;
		
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		
		int ans=0;
		
		sort(a,a+n);

		int x = a[0];		
		for(int i=1;i<n;i++) {
			int dif = k-a[i];
			ans += dif/x;
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


