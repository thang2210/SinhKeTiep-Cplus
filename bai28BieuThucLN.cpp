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
int n;
int ok =1;
int a[1000];

void kt(){
    for (int i =1;i <= 3 ;i++){
        a[i] = 1;
    }
}

void sinh(){
    int i = 3;
    while(i >= 1 && a[i] == 2){
        i--;
    }
    if (i == 0) ok = 0;
    else {
        a[i]++;
        for (int j = i +1; j<= n ;j++){
            a[j] =1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y, z , t; cin >> x >> y >> z >> t;
    kt();
    ok =1;

    ll ans = 0;
    while (ok){
        ll sum =x;
        for (int i =1;i <= 3; i++){
            if (i == 1){
                if (a[i] == 1) sum += y;
                else sum -= y;
            } else if (i == 2){
                if (a[i] == 1) sum += z;
                else sum -= z;
            } else {
                if (a[i] == 1) sum += t;
                else sum -= t;
            }
        }
        ans = max(ans , sum);
        sinh();
    }
    cout << ans;
}
