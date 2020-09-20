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
		
		string s;
		cin>>s;
		
		if(n%2) {
			int f=0;
			for(int i=0;i<n;i+=2) {
				int x = s[i]-'0';
				if(x%2) {
					f = 1;
					cout<<1<<"\n";
					break;
				}
			}
			
			if(!f) {
				cout<<2<<"\n";
			}
		}
		else {
			int f=0;
			for(int i=1;i<n;i+=2) {
				int x = s[i]-'0';
				if(x%2 == 0) {
					f = 1;
					cout<<2<<"\n";
					break;
				}
			}
			
			if(!f) {
				cout<<1<<"\n";
			}
		}
		
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


