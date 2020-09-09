#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007

using namespace std;

int perm(int a,int b) {
	cout<<"? "<<a<<" "<<b<<"\n";
	fflush(stdout);
	
	int x;
	cin>>x;
	
	return x;
}

int main() {

	int n;
	cin>>n;
	
	int ans[n+1];
	
	queue<int> q;
	q.push(1);
	
	for(int i=2;i<=n;i++) {
		q.push(i);
		
		int a = q.front();
		q.pop();
		int b = q.front();
		q.pop();
		
		int x = perm(a,b);
		int y = perm(b,a);
		
		if(x<y) {
			ans[b] = y;
			q.push(a);
		}
		else {
			ans[a] = x;
			q.push(b);
		}
	}
	
	ans[q.front()] = n;
	
	cout<<"!";
	
	for(int i=1;i<=n;i++) {
		cout<<" "<<ans[i];
	}
	cout<<"\n";
	
	fflush(stdout);
	
	
	return 0;
}

