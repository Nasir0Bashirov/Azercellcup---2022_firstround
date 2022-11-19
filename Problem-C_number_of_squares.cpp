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
    int n;
    intt res = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        res += (n - i + 1) * (n - i + 1);
    }
    cout << res;
}