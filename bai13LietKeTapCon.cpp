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

// c2:


bool cmp(vector<int> a , vector<int> b){
    for (int i = 0 ;i < min(a.size() , b.size()) ; i++){
        if (a[i] != b[i]) return a[i] < b[i];
    }
    return a.size() < b.size();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<vector<int>> res;
    for (int i =1 ;i < pow(2 , n) ;i++){
        vector<int> tm;
        for (int j =0 ;j < n ;j++){
            if (i && (1 << j)){
                tm.push_back(j+1);
            }
        }
        res.push_back(tm);
    }
    sort(res.begin() , res.end() , cmp);
    for (auto x : res){
        for (auto it : x){
            cout << it << " ";
        }
        cout << endl;
    }
}

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<string> res;
    for (int i = 1 ;i < pow(2 , n) ;i++){
        string tm = "";
        for (int j =0 ;j < n ;j++){
            if( i & (1 << j)){
                tm += to_string(j +1) + " ";
            }
        }
        res.push_back(tm);
    }
    sort(res.begin(), res.end());
    for  (auto x : res) cout << x << endl;
}
*/
