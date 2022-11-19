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
    string s1,s2;
    cin >> n >> s1 >> s2;
    int res = 0;
    for(int i=0;i<n;i++){
        if(s1[i] == 'C' and s2[i] == 'C'){
            res++;
        }
    }
    cout << res;
}