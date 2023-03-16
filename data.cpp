#include "bits/stdc++.h"
#define hhh cerr<<"hhh"<<endl
#define see(x) cerr<<(#x)<<'='<<(x)<<endl
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pr;
inline int read() {int x=0,f=1;char c=getchar();while(c!='-'&&c<48)c=getchar();if(c=='-')f=-1,c=getchar();while(c>47)x=x*10+(c^48),c=getchar();return f*x;}

const int maxn = 1e6+7;
const int inf = 0x3f3f3f3f;
const int mod = 1e9+7;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());



int main() {
    freopen("in", "w", stdout);
    int T=1; cout<<T<<endl;
    while(T--) {
        int n=5;
        printf("%d\n", n);
        vector<int> a(n,0);
        for(int i=0; i<n; ++i) a[i]=rng()%10+1;
        sort(a.begin(),a.end());
        for(int i=0; i<n; ++i) printf("%d%c", a[i], " \n"[i==n-1]);
    }
}