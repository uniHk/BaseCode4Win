#include "bits/stdc++.h"
#define hhh printf("hhh\n")
#define see(x) (cerr<<(#x)<<'='<<(x)<<endl)
using namespace std;
typedef long long ll;
typedef pair<int,int> pr;
inline int read() {int x=0,f=1;char c=getchar();while(c!='-'&&(c<'0'||c>'9'))c=getchar();if(c=='-')f=-1,c=getchar();while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();return f*x;}
 
const int maxn = 3e5+7;
const int inf = 0x3f3f3f3f;
const int mod = 1e9+7;



int main() {
    // if(system("diff out1 out")) printf("SB\n");
    // else printf("2333\n");
    for(int i=1; i; ++i) {
        //注意：下面三个源文件在每次修改后先自行编译一遍，因为这里system调用的是可执行文件
        system("./可执行/data"); //数据生成
        system("./可执行/C++1"); //正解
        system("./可执行/C++2"); //暴力
        printf("%d ", i);
        if(system("diff out out1")) { printf("Wrong\n"); break; }
        else printf("Yes\n");
    }
}