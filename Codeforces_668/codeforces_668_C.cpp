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
		int n,k;
		cin>>n>>k;
		
		string s;
		cin>>s;
		
		for(int i=0;i<k;i++) {
			if(s[i] == '?') {
				for(int j=i+k;j<n;j+=k) {
					if(s[j] != '?') {
						s[i] = s[j];
						break;
					}
				}
			}
		}
				
		int f=0;
		
		for(int i=0;i<k;i++) {
			if(s[i] != '?') {
				for(int j=i+k;j<n;j+=k) {
					if(s[j] == '?') {
						s[j] = s[i];
					}
					else if(s[j] != s[i]) {
						f = 1;
						cout<<"NO"<<"\n";
						break;
					}
				}
			}
			
			if(f) {
				break;
			}
		}
		
		
		if(!f) {
			int o=0,z=0;
			for(int i=0;i<k;i++) {
				if(s[i] == '1') {
					o++;
				}
				else if(s[i] == '0') {
					z++;
				}
			}
			
			if(o<=(k/2) && z<=(k/2)) {
				cout<<"YES"<<"\n";
			}
			else {
				cout<<"NO"<<"\n";
			}
		}
	}
	
	return 0;
}

