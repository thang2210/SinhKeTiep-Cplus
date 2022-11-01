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
int n; int a[1000]; int ok =1;

void kt(){
    for (int i =1;i <= n ;i++) a[i] = 1;
}

void sinh(){
    int i =n;
    while (i >=1 && a[i] == n){
        i--;
    }
    if(i == 0) ok =0;
    else {
        a[i]++;
        for (int j = i+ 1; j <= n ;j++) a[j] = 1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "";
    cin >> n;
    vector<string> bit;
    for (int i =1;i <= n ;i++){
        s += 'A' + i - 1;
    }


    cout << endl << endl;
    vector<string> v1 , v2;
    do{
        v1.push_back(s);
    } while (next_permutation(s.begin() , s.end()));


    kt();
    ok =1;
    while(ok){
        string res = "";
        for (int i =1;i <= n ;i++){
            res += to_string(a[i]);
        }
        v2.push_back(res);
        sinh();
    }
    for (auto x : v1){
        for (auto y : v2){
            cout << x << y << endl;
        }
    }
}
