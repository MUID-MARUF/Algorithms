#include <bits/stdc++.h> 
using namespace std; 
 
#define ll                  long long 
#define ld                  long double 
#define ull                 unsigned long long 
#define nl                  cout << "\n"; 
#define case                cout << "Case " << case_number << ": "; case_number++; 
#define fast                ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define PI                  (acos(-1)) 
 
#define arr(a,n)            for(ll i =0; i < n; i++) cin >> a[i]; 
#define arrab(arr,a,b)      for(ll i =a; i <= b ;i++) cin >> arr[i]; 
#define vec(v)              for(auto &i:v) cin >> i; 
#define tot(a)              a.begin(),a.end() 
#define srt(a)              sort(a.begin(), a.end()); 
#define dsrt(a)             sort(a.rbegin(), a.rend()); 
 
ll gcd(ll a, ll b){ return (__gcd(a,b));} 
ll lcm(ll a, ll b){ return (abs(a*b)/gcd(a,b));} 
 
void solve() 
{ 
    int profit[] = { 1, 2, 5, 6 }; 
    int weight[] = { 2, 3, 4, 5 }; 
    int knap = 8; 
    int n = sizeof(profit) / sizeof(profit[0]); 
 
    int dp[n+1][knap+1]; 
 
 
    for (int i = 0; i <= n; i++){ 
        for (int j = 0; j <= knap; j++){ 
            if(i == 0 || j == 0){ 
                dp[i][j] = 0; 
            } 
        } 
    } 
 
    for (int i = 1; i <= n; i++){ 
        for (int j = 0; j <= knap; j++){ 
 
            if(weight[i-1] > j){ 
                dp[i][j] = dp[i-1][j]; 
            } 
            else{ 
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight[i-1]] + profit[i-1]); 
            } 
        } 
 
    } 
 
    for (int i = 0; i <= n; i++){ 
        for (int j = 0; j <= knap; j++){ 
            cout << dp[i][j] <<" "; 
        } 
        cout<<endl; 
    } 
 
 
 
 
} 
 
 
int main() 
{ 
    fast; 
    solve(); 
    return 0; 
}