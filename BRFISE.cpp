#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    k--;
    
    vector<vector<int>> adj(n);
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    
    queue<int> q;
    vector<bool> vis(n);
    
    q.push(k);
    vis[k] = true;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        cout << u + 1 << " ";
        
        set<int> st;
        
        for (int& v: adj[u]) {
            if (vis[v]) continue;
            
            vis[v] = true;
            st.insert(v);
        }
        
        for (auto& it: st) {
            q.push(it);
        }
    }
    
    cout << "\n";
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}