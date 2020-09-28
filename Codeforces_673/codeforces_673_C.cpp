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
		
		vector<int> v[n+1];
		
		int a[n+1];
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			
			v[a[i]].push_back(i);
		}
		
		int ans[n+1];
		
		for(int i=0;i<=n;i++) {
			ans[i] = -1;
		}
		
		int prev=n+1;
		
		for(int i=1;i<=n;i++) {
			int k = 0;
			for(int j=0;j<v[i].size();j++) {
				if(j == 0){
					k = v[i][j];
				}
				else {
					k = max(k,v[i][j]-v[i][j-1]);
				}
			}
			
			if(v[i].size()>0) {
				k = max(k,(n+1)-(v[i][v[i].size()-1]));
			}
			
//			cout<<prev<<" "<<k<<"\n";
			
			if(k!=0 && k<prev) {
				ans[k] = i;
				prev = k;
			}
			
//			cout<<k<<"\n";
			
//			if(k!=0) {
//				for(int j=k;j<=n;j++) {
//					if(ans[j] == -1) {
//						ans[j] = i;
//					}
//				}
//			}
		}
		
//		for(int i=1;i<=n;i++) {
//			cout<<ans[i]<<" ";
//		}
//		cout<<"\n";
		
		for(int i=1;i<=n;i++) {
			if(ans[i] == -1) {
				continue;
			}
			else {
				int k = ans[i];
				while((i+1)<=n && ans[i+1] == -1) {
					ans[i+1] = k;
					i++;
				}
			}
		}
		
		for(int i=1;i<=n;i++) {
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


