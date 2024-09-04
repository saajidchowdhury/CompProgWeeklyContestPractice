#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace__gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define otree tree<ll,ll,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

void solve(){
}
int main()
{
 fast_cin();
 string str;
 cin>>str;
 vector<char> s;
 for(char x:str) s.pb(x);
 int k;
 cin>>k;
 for(int i=0;i<s.size();i++)
 {
    //cout<<"s right now is ";
    //for(char x:s) cout<<x;
    //cout<<ln;
    if(k<=0) break;
    int maxind = i;
    char maxchar = s[i];
    int lim = min(i+k+1,(int)s.size());
    for(int j=i+1;j<lim;j++)
    {
        if(s[j]>maxchar)
        {
            maxchar =s[j];
            maxind = j;
            //cout<<"updated maxchar to be "<<maxchar<<" and maxind to be "<<maxind<<ln;
        }
    }
    if(maxind!=i)
    {
        //cout<<"going to perform swaps"<<ln;
        for(int x=maxind;x>i;x--)
        {
            char r = s[x];
            char l = s[x-1];
            s[x]=l;
            s[x-1]=r;
            //cout<<"s is now ";
            //for(char x:s) cout<<x;
            //cout<<ln;
        }
    }
    k=k-(maxind-i);
 }
 for(char x:s) cout<<x;
 cout<<ln;
 return 0;
}
