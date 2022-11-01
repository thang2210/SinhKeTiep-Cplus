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


int n; string s; int ok =1;

void kt(){
    s = string(n , '6');

}

void sinh(){
    int i = s.size() -1;
    while (i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if(i == -1) ok =0;
    else {
        s[i] = '8';
    }
}


bool check(){
    if (s[0] == '6' || s[n-1] == '8') return false;
    if (s.find("88") != string::npos) return false;
    if(s.find("6666") != string::npos) return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    kt();
    ok =1;
    while (ok){
        if (check()){
            cout << s << endl;
        }
        sinh();
    }
}
