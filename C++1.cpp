#include <bits/stdc++.h>
#define hhh cerr << "hhh" << endl
#define see(x) cerr << (#x) << '=' << (x) << endl
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pr;
inline int read() {int x=0,f=1;char c=getchar();while(c!='-'&&c<48)c=getchar();if(c=='-')f=-1,c=getchar();while(c>47)x=x*10+(c^48),c=getchar();return f*x;}

const int maxn = 1e6+7;
const ll inf  = 2e18;
const int mod  = 998244353;

int n, m;
int a[maxn], c[maxn];
int r[maxn];
ll dp[maxn];
ll mi[maxn];
set<int> s[33];

void update(int i, int cost, int dd) {
    if (cost < mi[i]) {
        mi[i] = cost;
        dp[i] = dd;
    }
    else if (cost == mi[i]) {
        dp[i] = (dp[i] + dd) % mod;
    }
}

void solve() {
    dp[0] = 1;
    n = read();
    for (int i = 1; i <= n; ++i) {
        a[i] = read();
        mi[i] = inf;
        dp[i] = 0;
        r[i] = 0;
    }
    m = read();
    for (int i = 0; i <= m; ++i) c[i] = read(), s[i].clear();
    for (int i = 1; i <= n; ++i) {
        update(i, mi[i - 1] + c[0], dp[i - 1]);
        for (int j = 1; j <= m; ++j) {
            while (r[j] <= n && int(s[j].size()) <= j) {
                s[j].insert(a[++r[j]]);
            }
            if (r[j] <= n) s[j].erase(a[r[j]]);
            --r[j];
            if (int(s[j].size()) == j) update(r[j], mi[i - 1] + c[j], dp[i - 1]);
            s[j].erase(a[i]);
        }
        printf("%d: %lld %lld\n", i, mi[i], dp[i]);
    }
    printf("%lld %lld\n", mi[n], dp[n] % mod);
}

int main() {
    int T = read();
    while (T--) solve();
}