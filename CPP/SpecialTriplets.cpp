// Special Triplets

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
	cin >> T;
	// cin.get();                        For getline after cin
	// string S;   getline(cin,S);       For String input
	while(T-- > 0)
	{
		int N=0,k=0,count=0,A=0,B=0,C=0;
		cin >> N;
		for(C=1; C<=N; C++)
		{
			for(B=C;B<=(N-C);B+=C)
			{
				k=1;
				while(true)
				{
					A=(B*k)+C;
					if(A<=N)
					{
						count++; k++;
					}
					else
						break;
				}
				
			}
		}
		cout<< count << endl;
	}	
}
