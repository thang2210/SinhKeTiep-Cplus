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


int a[1000]; int n;


bool check(int a[] ,int n){
    for (int i = 1; i < n ; i++){
        if (abs(a[i] - a[i+1]) == 1) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i =1;i <= n ;i++){
        a[i] = i;
    }
    do{
        if(check(a , n)){
            for (int i = 1;i <= n ;i++){
                cout << a[i];
            }
            cout << endl;
        }

    } while (next_permutation(a + 1, a + n + 1));
}
