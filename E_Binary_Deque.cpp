#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD (ll)(1e9+7)

int32_t main() {
    fast;
    int t; cin >> t;
    while (t--) {
        int n;
        int s;
        cin>>n>>s;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int len=-1;
        map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(!mp.count(sum)){
                mp[sum]=i;
            }
            if(mp.count(sum-s)){
                len=max(len,i-mp[sum-s]);
            }
        }
        if(len==-1)
        cout<<-1<<'\n';
        else
        cout<<n-len<<'\n';
    }
    return 0;
}