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




string s; int n;
int ok =1;

void kt(){
    s = string(n , '0');
}

void sinh(){
    int i = s.size() -1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == -1) ok =0;
    else {
        s[i] = '1';
    }
}

bool check(string s){
    string t = s;
    reverse(t.begin() , t.end());
    return s == t;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    kt();
    ok =1;
    while (ok){
        if (check(s)){
            cout <<s << endl;
        }
        sinh();
    }
}
