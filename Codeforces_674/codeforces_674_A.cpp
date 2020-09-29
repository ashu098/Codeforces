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
		
		int i=0,k=0;
		
		while(i<n) {
			i = k*x + 2;
			k++;
		}
		
		cout<<k<<"\n";
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	input();

	return 0;
}


