#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void input() {
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	int ans=0;
	
	if(n%2) {		
		int b[n];
		
		int j=0;
		for(int i=1;i<n;i+=2) {
			b[i] = a[j];
			j++;
		}
		
		for(int i=0;i<n;i+=2) {
			b[i] = a[j];
			j++;
		}
		
		
		for(int i=1;i<n-1;i++) {
			if(b[i]<b[i-1] && b[i]<b[i+1]) {
				ans++;
			}
		}
		
		cout<<ans<<"\n";
		for(int i=0;i<n;i++) {
			cout<<b[i]<<" ";
		}
	}
	
	else {		
		int b[n],j=0;
		
		for(int i=1;i<n;i+=2) {
			b[i] = a[j];
			j++;
		}
		
		for(int i=0;i<n;i+=2) {
			b[i] = a[j];
			j++;
		}
		
		for(int i=1;i<n-1;i++) {
			if(b[i]<b[i-1] && b[i]<b[i+1]) {
				ans++;
			}
		}
		
		cout<<ans<<"\n";
		for(int i=0;i<n;i++) {
			cout<<b[i]<<" ";
		}
	}
	
	
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


