#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
 
const int N = 1001;
const int MOD = 1000000007;
bool is[N][N];
char s[N];
int dp[N];
 
int main()
{
gets(s);
int n = strlen(s);
dp[0] = 1;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++)
if (s[i-1] == s[j-1] && (j+1 >= i || is[j+1][i-1])) {
is[j][i] = true;
dp[i] = (dp[i]+dp[j-1])%MOD;
}
}
printf("%d\n", dp[n]);
}
