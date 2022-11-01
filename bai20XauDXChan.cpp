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



string s;

bool ok = true;
void sinh(){
    int i = s.size() -1;
    while (i >= 0 && s[i] =='1'){
        s[i] = '0';
        i--;
    }
    if (i == -1) ok = false;
    else {
        s[i] = '1';
    }
}

//bool ok = true;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<string> v;
    for (int i =1;i <= n /2 ;i++){
        ok = true;
        s = string(i , '0');
        while (ok){
            string t = s;
            reverse(begin(t) , end(t));
            v.push_back(s + t);
            sinh();
        }
    }
    sort(v.begin() , v.end());
    for (auto x : v){
        cout << x << endl;
    }
}
