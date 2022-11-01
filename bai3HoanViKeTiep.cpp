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
    int n; cin >> n;
    int a[1000];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    /*int i = n-2;
    while (i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if (i == 0){
        for (int i=1 ; i <= n ;i++){
            cout << i << " ";
        }
    } else {
        int j = n-1;
        while (a[i] > a[j]) j--;
        swap(a[i] , a[j]);
        reverse(a + i  +1, a + n);
        for (int i =0 ;i < n ;i++){
            cout << a[i] << " ";
        }
    }*/
    // dung ham
    if (next_permutation( a,a + n)){
        for (int i =0 ;i < n ;i++){
            cout << a[i] << " ";
        }
    } else {
        for (int i=1;i <= n ; i++){
            cout << a[i] << " ";
        }
    }
}
