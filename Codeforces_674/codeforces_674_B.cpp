#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int t;
	cin>>t;
	
	while(t--) {
		int n,m;
		cin>>n>>m;
		
		int f=0,f1=0;
		
		for(int i=0;i<n;i++) {
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			
			if(b == c) {
				f = 1;
			}
		}
		

		if(m%2 || f == 0) {
			cout<<"NO\n";
		}
		else {
			cout<<"YES\n";
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


