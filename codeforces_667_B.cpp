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
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		
		ll a1 = a,b1 = b,x1 = x,y1=y,n1=n;
		
		ll p1,p2;
		
			ll d1 = a-x;
			if(d1>=n) {
				a -= n;
				ll s = a*b;
				p1 = s;
			}
			else {
				n -= d1;
				a = x;
				
				ll d2 = b-y;
				if(d2>=n) {
					b -= n;
					ll s = a*b;
					p1 = s;
				}
				else {
					b = y;
					ll s= a*b;
					p1 = s;
				}
			}
		
			d1 = b1-y1;
			if(d1>=n1) {
				b1 -= n1;
				ll s = a1*b1;
				p2 = s;
			}
			else {
				n1 -= d1;
				b1 = y1;
			
			
				ll d2 = a1-x1;
				if(d2>=n1) {
					a1 -= n1;
					ll s = a1*b1;
					p2 = s;
				}
				else {
					a1 = x1;
					ll s= a1*b1;
					p2 = s;
				}
			}
		
		p1 = min(p1,p2);
		cout<<p1<<"\n";
	}
	
	return 0;
}

