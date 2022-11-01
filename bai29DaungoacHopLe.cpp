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

void kt(){
    for (int i =1; i <= n ;i++){
        a[i] = 0;
    }
}


void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i == 0) ok =0;
    else {
        a[i] =1;
    }
}


bool check(){
    int sum =0;
    for (int i = 1 ; i <= n ; i++){
        if (a[i] == 1) sum -= 1;
        else sum += 1;
        if (sum < 0) return false;
    }
    return sum == 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    kt();
    ok = 1;
    vector<string> v;
    while (ok){
        if (check()){
            string tm = "";
            for (int i =1;i <= n ;i++){
                if (a[i] == 1) tm += ")";
                else tm += "(";
            }
            v.push_back(tm);
        }
        sinh();
    }
    if (v.size() == 0) cout << "NOT FOUND";
    else {
        for (auto x : v){
            cout << x << endl;
        }
    }
}
