//---------------Welcome To Sagar Kori's Submission------------//

//--------------Pata hai stalking achi baat nahi hoti---------//

//---------------Besharam hai pura... Padhte hi jaa rha hai----//

#include <bits/stdc++.h>
using namespace std;

// Defining some datatypes here :)

typedef long long int ll;
#define all(v) v.begin(), v.end()
#define For0 for (ll i = 0; i < n; i++)
#define For1 for (ll i = 1; i <= n; i++)
#define Forin                  \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define Forauto       \
    for (auto it : v) \
        cout << it << " ";
#define pb push_back
#define F first
#define S second
#define B begin()
#define E end()

typedef set<int> sti;
typedef multiset<int> msti;
typedef multiset<long long> mstl;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpi;
typedef vector<bool> vb;
typedef vector<string> vs;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, int> psi;
typedef pair<string, ll> psl;

typedef map<int, int> mpii;
typedef map<ll, ll> mpll;
typedef map<string, int> mpsi;
typedef map<string, ll> mpsl;
#define fast    \
    cin.tie(0); \
    cin.sync_with_stdio(0);

//-------------------DEFINED-------------------//

#define Y cout << "YES\n";
#define N cout << "NO\n";
#define nl cout << '\n';
#define fg bool flag = false;
#define ll long long

void solve()
{
//Try to put fast; before taking inputs as mentioned bby kori
ll int n,x;
cin>>n>>x;
ll int ans=0;
vector<int> nums;
for(ll int i=0;i<n;i++){
    int num;
    cin>>num;
    if(num==x){
        ans++;
    }
    else{
        nums.push_back(num);

    }
}
sort(nums.begin(),nums.end());
long long int l=0;
long long int h=nums.size()-1;
while(l<=h){
    ll int temp=h;
    while(l<temp){
        if(nums[l]+nums[temp]<=x){
            ans++;
            l++;
            h--;
            break;
        }
        else{
            temp--;
        }
        if(l<temp)ans++;
    }
}
cout<<ans<<endl;

}

int main()
{
    fast;
        solve();
}
