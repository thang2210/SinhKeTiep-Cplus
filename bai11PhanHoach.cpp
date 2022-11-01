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


int n; int a[1000];
int ok =1;
int dem =0;


void kt(){
    a[1] = n;
    dem =1;
}

void sinh(){
    int i = dem;
    while (i >= 1 && a[i] == 1){
        i--;
    }
    if (i == 0) ok = 0;
    else {
        a[i]--;
        int thieu = dem - i + 1;
        dem = i;
        int q = thieu / a[i]; int r = thieu % a[i];

        while (q--){
            a[dem + 1] = a[i];
            dem++;
        }
        if(r){
            a[dem +1] = r;
            dem++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    kt();
    ok = 1;
    vector<string> res;
    int ans =0;
    while(ok){
        string tm = "";
        for (int i =1;i <= dem ;i++){
            tm += to_string(a[i]);
            if (i != dem) tm += "+";
        }
        ans++;
        res.push_back(tm);
        sinh();
    }
    cout << ans << endl;
    for (auto x : res) cout << x << endl;
}
