#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}



/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int> v;
    for (int i =0 ;i < n ;i++){
        int x; cin >> x;
        v.insert(x);
    }
    vector<int> ans;
    for (auto x : v) {
        ans.push_back(x);
    }
    reverse(ans.begin() , ans.end());
    do{
        for (auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    } while (prev_permutation(ans.begin() , ans.end()));
}
*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int> v;
    for (int i = 1; i <= n ;i++){
        int x; cin >> x;
        v.insert(x);
    }
    vector<int>ans;
    for (auto x : v){
        ans.push_back(x);
    }
    int a[n];
    for (int i =1 ;i <= ans.size() ; i++){
        a[i] = v.size() - i + 1;
    }
    do{
        for (int i =1;i <= ans.size() ;i++){
            cout << ans[a[i] -1] << " ";
        }
        cout << endl;
    } while (prev_permutation(a + 1 , a + v.size() +1));
}
