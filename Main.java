import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        Main task=new Main();
        task.main(); out.close();
    }
	static BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out=new PrintWriter(new OutputStreamWriter(System.out));

    final int maxn = (int)3e5+7;
    final int inf  = 0x3f3f3f3f;
    final int mod  = (int)1e9+7;



    void solve() throws IOException {
        StringTokenizer st=new StringTokenizer(in.readLine());
        int n=Integer.parseInt(st.nextToken());
        st=new StringTokenizer(in.readLine());
        int[] a=new int[n];
        for(int i=0; i<n; ++i) a[i]=Integer.parseInt(st.nextToken());
        for(int i=n-1; i>=0; --i) out.print(a[i]+(i==0?"\n":" "));
    }

    void main() throws IOException {
        int T=1;
        // int T=Integer.parseInt(in.readLine());
        while(T-->0) solve();
    }
}