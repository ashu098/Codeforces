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
		
		bool f[n];
		memset(f,0,sizeof(f));
		
		int a[n],gc = 0,pos;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(gc < a[i]) {
				gc = a[i];
				pos = i;
			}
		}
		
		f[pos] = 1;
		
		vector<int> v;
		v.push_back(gc);
		
		while(v.size() != n) {
			
			int pos=-1,y=0;
			
			for(int i=0;i<n;i++) {
				if(!f[i]) {
//					int y = a[i];
					int x = __gcd(gc,a[i]);
					
					if(x>y) {
						y = x;
						pos = i;
					}
				}
			}
			
			v.push_back(a[pos]);
			if(pos != -1) {
				f[pos] = 1;
			}
			gc = y;
		}
		
		for(auto it:v) {
			cout<<it<<" ";
		}
		cout<<"\n";
		
	}
	
	return 0;
}

