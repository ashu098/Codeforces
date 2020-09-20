#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int t;
	cin>>t;
	
	while(t--) {
		int n,x;
		cin>>n>>x;
		
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			a[i] = x-a[i];
		}
		
//		for(int i=0;i<n;i++) {
//			cout<<a[i]<<" ";
//		}
		
		int pos=0,neg=0,f=0;
		
		for(int i=0;i<n;i++) {
			if(a[i] == 0) {
				f=1;
			}
			if(a[i]>0) {
				pos += a[i];
			}
			else {
				neg += a[i];
			}
		}
		
		if((pos == 0 && neg == 0)) {
			cout<<0<<"\n";
		}
		else if(pos == abs(neg) || f) {
			cout<<1<<"\n";
		}
		else {
			cout<<2<<"\n";
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


