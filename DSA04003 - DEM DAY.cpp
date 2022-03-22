#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define sc second
#define pb push_back
#define all(x) x.begin(),x.end()
#define endl "\n"

const int maxn = 1e5+1;
const ll mod = 123456789;
typedef pair<int,int> ii;

ll powMod(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    ll tmp = powMod(a, b/2) % mod;
    if (b & 1) return tmp % mod * tmp % mod * a % mod;
    return tmp % mod * tmp % mod;
}

void process() {
    ll n;
    cin >> n;
    cout << powMod(2, n-1) << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("inp.in", "r", stdin);
        freopen("out.out", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int test;
    cin >> test;
    while(test--) {
        process();
    }
    

    return 0;
}