#include<bits/stdc++.h>
using namespace std;
using ll = long long;


string s; int ok =1;

void sinh(){
    int i = s.size() -1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i == -1) ok =0;
    else {
        s[i] = '1';
    }
}
int main() {
    ll n; cin >> n;
    ll a[n];
    for (auto &x : a) cin >> x;
    s = string(n , '0');
    ok =1; ll ans = INT_MAX;
    while (ok){
        ll sum1 = 0 , sum2 =0;
        for (int i =0 ;i < s.size()  ; i++){
            if(s[i] == '1'){
                sum1 += a[i];
            } else {
                sum2 += a[i];
            }
            ans = min(abs(sum1 - sum2) , ans);
            sinh();
        }
    }
    cout << ans;
}
