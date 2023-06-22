#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int& i: arr) cin >> i;
    
    stack<int> st;
    ll res = 0;
    vector<ll> dp(n);
    
    for (int i = 0; i < n; i++) {
        int mn = 0;
        ll cur = 0;
        
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            int j = st.top();
            st.pop();
            
            cur += dp[j];
            
            cur += 1LL * (i - j - 1) * (arr[j] - mn);
            dp[j] = cur;
            
            // cout << i << " " << j << " " << cur << "\n";
            
            mn = arr[j];
        }
        
        if (!st.empty()) {
            int j = st.top();
            
            cur += 1LL * (i - j - 1) * (arr[i] - mn);
            dp[j] += cur;
        }
        
        st.push(i);
        
        // cout << i << " " << res << "\n";
    }
    
    for (ll& i: dp) {
        // cout << i << " ";
        res = max(res, i);
    }
    
    cout << res << "\n";
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