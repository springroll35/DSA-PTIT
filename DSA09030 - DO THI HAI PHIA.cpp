#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define sc second
#define pb push_back
#define all(x) x.begin(),x.end()
#define endl "\n"

const int maxn = 1e3+1;
const ll mod = 1e9+7;
typedef pair<int,int> ii;

int m, n;
std::vector<std::vector<int> > ke;
int vis[maxn], tt[maxn];
int id;

void DFS(int u) {
    if (vis[u]) return;
    vis[u] = 1;
    for(auto v : ke[u]) {
        if (!vis[v]) {
            tt[v] = id;
            DFS(v);            
        }
    }
}

void process() {
    ke.clear();
    cin >> n >> m;
    for(int i = 0; i <= n; i++) {
        vis[i] = tt[i] = 0;
    }
    vector<int> a(0);
    vector<ii> edges(m);
    for(int i = 0; i <= n; i++) ke.pb(a);
    for(int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        ke[u].pb(v);
        ke[v].pb(u);
        edges.pb({u, v});
    }
    id = 0;
    for(int i = 1; i <= n; i++) {
        if (!vis[i]) {
            id++;
            DFS(i);
        }
    }
    cout << id;
    if (id != 2) {
        cout << "NO" << endl;
        return;
    }
    for(auto x : edges) {
        if (tt[x.fi] == tt[x.sc]) {
            cout << "NO" << endl;
            return;
        }
    }
    for(auto x : tt) cout << x << ' ';
    cout << "YES" << endl;
    
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