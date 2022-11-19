#include <bits/stdc++.h>
#define intt long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<intt,intt>
#define F first
#define S second
#define endl '\n'
#define sync                          \
    ios_base::sync_with_stdio(0);     \
    cin.tie(0);                       \
    cout.tie(0)
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a + b + c == 180){
        cout << max(a,max(b,c));
    }
    else{
        cout << -1;
    }
}