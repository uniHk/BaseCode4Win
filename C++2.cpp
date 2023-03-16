#include <bits/stdc++.h>
#define hhh cerr << "hhh" << endl
#define see(x) cerr << (#x) << '=' << (x) << endl
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pr;
inline int read() {int x=0,f=1;char c=getchar();while(c!='-'&&c<48)c=getchar();if(c=='-')f=-1,c=getchar();while(c>47)x=x*10+(c^48),c=getchar();return f*x;}

const int maxn = 3e5+7;
const int inf  = 0x3f3f3f3f;
const int mod  = 1e9+7;

int n;
int a[maxn], b[maxn];
int dp[100];

int main() {
    n = read();
    for (int i = 1; i <= n; ++i) b[i] = b[i + n] = read();
    for (int i = 1; i <= n; ++i) a[i] = a[i + n] = read();
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= b[i]; --j) {
            dp[j] = max(dp[j], dp[j - b[i]] + a[i]);
            res = max(res, dp[j]);
        }
    }
    cout << res << endl;
}