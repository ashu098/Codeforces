#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

void dfs(int x,vector<int> &ans,int size[],vector<int> g[],int par,int n) {
	size[x] = 1;
	int f1=1;
	
	for(auto it:g[x]) {
		if(it != par) {
			dfs(it,ans,size,g,x,n);
			
			size[x] += size[it];
			
			if(size[it] > (n/2)) {
				f1 = 0;
			}
		}
	}
		
	
	if((n-size[x]) > (n/2)) {
		f1 = 0;
	}
	if(f1) {
		ans.push_back(x);
	}
	
	
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		
		vector<int> g[n+1];
		
		for(int i=1;i<n;i++) {
			int x,y;
			cin>>x>>y;
			
			g[x].push_back(y);
			g[y].push_back(x);
		}
		
		vector<int> ans;
		int size[n+1];
		int par = 0;
		
		dfs(1,ans,size,g,par,n);
		
//		for(int i=1;i<=n;i++) {
//			cout<<size[i]<<" ";
//		}
//		cout<<"\n";
//		
//		cout<<ans.size()<<"\n";
		
		if(ans.size() == 1) {
			cout<<ans[0]<<" "<<g[ans[0]][0]<<"\n";
			cout<<ans[0]<<" "<<g[ans[0]][0]<<"\n";
		}
		else {
			for(auto it:g[ans[0]]) {
				if(it!=ans[1]) {
					cout<<ans[0]<<" "<<it<<"\n";
					cout<<ans[1]<<" "<<it<<"\n";
					break;
				}
			}
		}
	}
	
	return 0;
}

