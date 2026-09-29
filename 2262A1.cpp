#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define int long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

#define f(s, e, i) for (int i = s; i < e; i++)
#define cf(s, e, i) for (int i = s; i <= e; i++)
#define rf(s, e, i) for (int i = s; i >= e; i--)
#define pb push_back
#define ppb pop_back
#define all(a) (a).begin(), (a).end()
#define setbits(x) __builtin_popcountll(x)
#define srt(v) sort(v.begin(), v.end())
#define lb lower_bound
#define ub upper_bound
#define maxof(a) *max_element((a).begin(), (a).end())
#define minof(a) *min_element((a).begin(), (a).end())
#define MOD 1000000007
#define ff first
#define ss second
#define vp vector<pair<int, int>>

// Compile locally with -DLOCAL to enable debug prints; they vanish on judges automatically.
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debugv(v)              \
    do                         \
    {                          \
        cerr << #v << " = [ "; \
        for (auto &_x : (v))   \
            cerr << _x << " "; \
        cerr << "]" << endl;   \
    } while (0)
#else
#define debug(x)
#define debugv(v)
#endif
#define out(txt) cout << (txt) << '\n'

template <typename T>
void print_v(const vector<T> &v)
{
    for (const auto &x : v)
        cout << x << " ";
    cout << endl;
}

template <typename T>
void cin_v(vector<T> &v)
{
    for (auto &x : v)
        cin >> x;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<int> ans;
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] != a[i - 1])
        {
            debug(i);
            ans.insert(i);
        }
    }
    for (int i = 0; i < a[0]; i++)
        ans.insert(i);
    // int cnt=0;
    // for(auto it:ans){
    //     if()
    //     if(cnt>=a[0]){

    //     }
    //     cnt++;
    // }
    // sort(all(ans));
    auto itt = ans.find(a[0]);
    if (itt != ans.end())
        ans.erase(itt);
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // init_ncr();
    cin >> t;
    while (t--)
        solve();

    return 0;
}