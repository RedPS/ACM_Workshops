#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int *ar = new int[INT_MAX];
    int k = 0;
    cin >> str;
    for(unsigned int i = 0; i < str.length(); i++){
        if(isdigit(str[i]))
            ar[k++] = str[i] - 48;
    }
    sort(ar,ar+k);
    for(int i = 0; i < k; i++){
        cout << ar[i];
        if(i < k-1)
            cout << "+";
    }
    cout << endl;
    return 0;
}