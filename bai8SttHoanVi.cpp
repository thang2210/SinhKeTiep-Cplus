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


bool check(int a[] , int b[] , int n){
    for (int i =0 ;i < n ;i++){
        if (a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[1000];
    for (int i =0 ;i < n ;i++) {
        cin >> a[i];
    }
    int b[n]; // luu cau hinh ::
    for (int i =0 ;i < n ; i++){
        b[i] = i+1;
    }
    int cnt =1;
    do{
        if (check( a, b , n)){
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    } while(next_permutation(b, b + n));
}



