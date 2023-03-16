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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int head[maxn], to[maxn*2], nxt[maxn*2], tot;
inline void add_edge(int u, int v) {
    ++tot; to[tot]=v; nxt[tot]=head[u]; head[u]=tot;
    ++tot; to[tot]=u; nxt[tot]=head[v]; head[v]=tot;
}

ll fac[maxn], inv[maxn];
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll qpow(ll a,ll k=mod-2,ll p=mod){ll s=1;while(k){if(k&1)s=s*a%p;a=a*a%p;k>>=1;}return s;}
ll comb(int n, int m) {
    if(n<m||m<0) return 0;
    return fac[n]*inv[m]%mod*inv[n-m]%mod;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    #endif
    ios::sync_with_stdio(false); cin.tie(nullptr);
    fac[0]=fac[1]=inv[0]=inv[1]=1;
    for(int i=2; i<maxn; ++i) fac[i]=i*fac[i-1]%mod;
    for(int i=2; i<maxn; ++i) inv[i]=(mod-mod/i)*inv[mod%i]%mod;
    for(int i=2; i<maxn; ++i) inv[i]=inv[i]*inv[i-1]%mod;
}

int Tot;
char *ch, buf[50000005];
inline int read(){int x=0,f=1;++ch;while(ch<buf+Tot&&*ch!='-'&&*ch<48)++ch;if(ch==buf+Tot)return 0;if(*ch=='-')f=-1,++ch;while(*ch>47)x=x*10+(*ch^48),++ch;return f*x;}
    ch=buf-1;
    Tot=fread(buf,1,5e7,stdin);

struct Mat{
    ll m[2][2];
    ll * operator [] (int i) { return m[i]; }
    Mat() { memset(m,0,sizeof(m)); }
    friend Mat operator*(Mat &a,Mat &b){Mat c;for(int i=0;i<2;++i)for(int j=0;j<2;++j)for(int k=0;k<2;++k)c[i][j]=(c[i][j]+a[i][k]*b[k][j])%mod;return c;}
    friend Mat qpow(Mat a,int k){Mat s;for(int i=0;i<2;++i)s[i][i]=1;while(k){if(k&1)s=s*a;a=a*a;k>>=1;}return s;}
};