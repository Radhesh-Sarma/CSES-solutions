#include <bits/stdc++.h>
using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define endl "\n"
  #define int long long 
  const int N = 100005;
  #define all(v) v.begin(),v.end()
  #define double long double
  #define trace1(x)                cerr<<#x<<": "<<x<<endl
  #define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
  #define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
  #define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
  #define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<< ": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
  #define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
  #define cases int testcases;cin>>testcases; while(testcases--)
const int MOD = 1000000007;
const int INF = (1LL << 62) - 1;
//Divyansh is a nice boy//
int32_t main()
{
 
 
 
    IOS
 
    int n, x;
    cin >> n >> x;
 
    vector<int> dp(x+1),h(n+1),s(n+1);
 
    // dp[n] denotes the maximum number of pages you can buy with atmost x price
 
    //dp[n] = max(dp[n-1],dp[n-h[i]] + s[i])
 
    dp[0] = 0;
 
    for(int i = 1; i <= n; i++)cin >>h[i];
 
    for(int i = 1; i <= n; i++)cin >> s[i];
 
    for(int i = 1; i <= n; i++)
    {
      for(int j = x;j-h[i]>=0; j--)
      {
        dp[j] = max(dp[j],dp[j-h[i]] + s[i]);
      }
    }
 
    for(int i = 1; i <= x; i++)
    {
      dp[i] = max(dp[i],dp[i-1]);
    }
 
 
 
 
 
    cout << dp[x] << endl;
 
 
 
    return 0;
}
