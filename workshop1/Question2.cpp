#include<bits/stdc++.h>
using namespace std;

int *a = new int[INT_MAX];
int main()
{   
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a + 3);
    if( a[0] + a[1] > a[2] && a[0] + a[2] > a[1] && a[1] + a[2] > a[0] )
    {
        cout << "0" << endl;
    }
    else
    {
        cout << a[2] - (a[0] + a[1]) + 1 << endl;
    }
    return 0;
}
