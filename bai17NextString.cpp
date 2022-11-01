

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



/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if (next_permutation(begin(s) , end(s))){
        cout << s << endl;
    } else cout << "NOT EXIST";
}*/

 int a[1000];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    int n = s.size();
    for (int i =1 ;i <= n ;i++){
        a[i] = s[i-1] - '0'; // luu voa mang :::
    }
    if (!next_permutation(a+1 , a + n +1)){
        cout << "NOT EXIST";
    } else {
        for (int i = 1 ;i <= n ;i++){
            cout << a[i];
        }
    }
}
