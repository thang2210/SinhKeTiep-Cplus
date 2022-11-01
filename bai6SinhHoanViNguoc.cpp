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


/*void kt(){
    for (int i=1 ; i <= n ; i++) a[i] = i;
}

void sinh(){
    int i = n -1;
    while (i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if (i == 0) ok =0;
    else {
        int j= n;
        while (a[i] > a[j]) j--;
        swap(a[i] , a[j]);
        reverse(a+ i +1 , a + n +1);
    }
}*/
// CACAH 2:


void kt(){
    for (int i = 1; i <= n ;i++) a[i] = n - i +1;
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] < a[i+1]){
        i--;
    }
    if(i == 0) ok =0;
    else {
        int j = n;
        while (a[i] < a[j]) j--;
        swap(a[i] , a[j]);
        sort( a+ i +1 , a + n + 1 , greater<int> ());
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    kt();
    ok = 1;
    vector<vector<int>> res;

   /* while (ok){
        vector<int> tmp( a + 1 , a + n + 1);
        res.push_back(tmp);
        sinh();
    }
    for (int i = res.size() -1 ;i >= 0 ;i--){
        for (auto x : res[i]){
            cout << x;
        }
        cout << endl;
    }*/
    while (ok){
        for (int i = 1; i <= n ;i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}

