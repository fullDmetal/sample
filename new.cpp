#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define f first
#define int long long
#define INTMAX 1e15+5
#define mp make_pair
#define N 1000005
#define pb push_back
#define pencho ios_base::sync_with_stdio(false);cin.tie(NULL);
#define s second
/*STL:
       (1) PRIORITY_QUEUE pq:
       -> priority_queue < int > pq; // max_heap
       -> priority_queue < int , vector < int > , greater < int > > pq; // min_heap
       -> pq.top()   --> returns the maximum or minimum element
       -> pq.push()  --> push element into the queue
       -> pq.pop()   --> remove top most element
       -> pq.empty() --> checks whether queue is empty or not

       (2) set / multiset  ss;
       --> ss.insert(key); (insertion)
       --> ss.erase(ss.find(key)) .. (deletion)
       --> ss.find(key) != ss.end() ..existence check
       --> ss.lower_bound(x) -> smallest value which is greater than or equals to x
       --> ss.upper_bound(x) --> first value strictly greater than x
       --> multiset< data_type , greater<data_type> > ms; // for max ordering

       (3) common functions
       lower_bound(v.begin(),v.end(),x) - v.begin() --> smallest value greater than or equals to x
       upper_bound(v.begin(), v.end(),x)- v.begin() --> smallest value greater than x
       memset(dp , val , sizeof(dp)) -> sets the value of array dp to val

       (4)    Comparator for set
                     struct comp {
                            bool operator()(pair<int, int>a, pair<int, int>b) {
                     };
};
*/
int mod = 1000000007;
int bp(int x, int y) {int ans = 1; x %= mod; while (y) {if (y & 1) ans = ans * x % mod; x = x * x % mod; y >>= 1;} return ans;}
int mod_inverse(int x) {return bp(x, mod - 2); }
int gcd (int a, int b) { while (b) {a %= b; swap(a, b);} return a;}
int max(int a, int b) {     if (a < b)    swap(a, b);   return a;}
int min(int a, int b) { if (a > b) swap(a, b); return a;}
int countSetBits(int n) {int count = 0; while (n) {count += n & 1; n >>= 1;} return count;}





void solve() {

}




signed main()
{
#ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("o.txt", "w", stdout);
#endif

       solve();
}