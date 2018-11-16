
/*
musubi
Dinh Cong Son
*/

#include<bits/stdc++.h>
using namespace std;
#define eout(X) return !printf(X)
#define y1 quaytayqwerty
#define sqr(X) ((X)*(X))
#define sz(x) ((int)(x).size())
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define rep(i,a,b) for(int i=(a), _b=(b);i<=b;i++)
#define rep1(i,n) for(int i=0,_n=(n);i<_n;i++)
#define rep2(i,a,b) for(int i=(b),_a=(a);i>=_a;i--)
#define full(a,x) memset((a),(x),sizeof(a))
#define all(a) (a.begin(), a.end())

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
ull f[1001][1001];
int n,a,cnt;
int main()
{
    //freopen("A.IN","r",stdin);
    //freopen("A.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f[0][0]=1;
    rep(i,1,1000)
    rep(j,0,1000) f[i][j]=f[i-1][j-1]+f[i-1][j];
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==2)
            cnt++;
    }
    cout<<f[cnt][9];
}
