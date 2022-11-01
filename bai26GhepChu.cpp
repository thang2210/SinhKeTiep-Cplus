
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


bool n_Am(char a){
    return a == 'A' || a == 'E';
}


bool check(string s){
    for (int i = 1 ; i < s.length() -1 ; i++){
        if (n_Am(s[i]) && !n_Am(s[i-1]) && !n_Am(s[i+1])) {
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s; cin >> s;
    string tm = "";
    vector<string> ok;
    for (char i = 'A' ;i <= s ; i++){
        tm += string(1 , i);
        ok.push_back(tm);
    }
    for (auto x : tm) cout << x << endl; // test

    cout << endl;
    do{
        if (check(tm)) cout << tm << endl;
    } while (next_permutation(tm.begin()  , tm.end()));

}
