#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bits(int n)
    {
        int ans=0;
        while(n>0)
        {
            ans++;
            n=n>>1;
        }
        return ans;
    }

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int N;
        cin>>N;
        int n=bits(N);
        int ans1=N-pow(2,n-1)+1;
        int ans2=pow(2,n-1)-pow(2,n-2);
        cout<<max(ans1,ans2)<<endl;
	    
	}
	return 0;
}
