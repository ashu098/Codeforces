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
		int n,x,y;
		cin>>n>>x>>y;
		
		int dif = y-x,d=0;
		
		for(int i = 1;i<=dif;i++) {
			if(dif%i == 0) {
				if(((dif/i)+1) <= n) {
					d = i;
					break;
				}
			}
		}
		
		
		vector<int> v;
		
		for(int i=x;i<=y;i+=d) {
			v.push_back(i);
		}
		
		n -= v.size();
		
		x -= d;
		
		while(n>0 && x>0) {
			v.push_back(x);
			n -= 1;
			x -= d;
		}
		
		y += d;
		while(n>0) {
			v.push_back(y);
			n -= 1;
			y += d;
		}
		
		for(int i=0;i<v.size();i++) {
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

