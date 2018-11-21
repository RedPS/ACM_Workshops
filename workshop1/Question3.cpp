#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t = 0,cnt = 0;  
	long long a = 0;
	cin >> t;
	while( t-- )
	{
		cin >> a;
		for( cnt = 0 ; a ; a >>= 1 )  
		{
			if ( a&1 ) 
				cnt++;
		}
		cout << ( long long ) pow ( 2,cnt ) << endl;
	}
	return 0;
}