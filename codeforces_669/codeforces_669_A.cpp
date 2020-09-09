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
		int n;
		cin>>n;
		
		int a[n],z=0,o=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			
			if(a[i]) {
				o++;
			}
			else {
				z++;
			}
		}
		
		if(z>=o) {
			cout<<z<<"\n";
			for(int i=0;i<z;i++) {
				cout<<0<<" ";
			}
			cout<<"\n";
			continue;
		}
		else {
			if(o%2) {
				cout<<o-1<<"\n";
				for(int i=0;i<o-1;i++) {
					cout<<1<<" ";
				}
				cout<<"\n";
			}
			else {
				cout<<o<<"\n";
				for(int i=0;i<o;i++) {
					cout<<1<<" ";
				}
				cout<<"\n";
			}
		}
		
	}
	
	return 0;
}

