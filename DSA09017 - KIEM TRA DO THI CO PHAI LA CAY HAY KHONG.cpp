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
const ll mod = 1e9+7;
typedef pair<int,int> ii;

int n;
std::vector<std::vector<int> > ke;
int deg[maxn];

void process() {
    ke.clear();
    cin >> n;
    for(int i = 0; i <= n; i++) {
        deg[i] = 0;
    }
    bool ok = true;
    for(int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        if (deg[u] >= 1 && deg[v] >=1) {
            ok = false;
        }
        deg[u]++;
        deg[v]++;
    }
    cout << (ok ? "YES" : "NO") << endl;
    
    
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