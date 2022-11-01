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



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string a[n];
    for(int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    sort( a,a + n);
    do{
        for (int i =0 ;i < n ;i++) cout << a[i] << " ";
        cout << endl;

    } while (next_permutation( a,a + n));
}
