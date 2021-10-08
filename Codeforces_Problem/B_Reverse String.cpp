#include<bits/stdc++.h>
using namespace std;
#define Priyansh ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long int
#define endl '\n'
#define all(v) (v).begin(), (v).end()
ll MAX = 1e6 + 1;
ll mod = 1e9 + 7;

void solve(){
   
   string a,b;
  cin>>a>>b;
        bool flag = 0;
        for (int i=0;i<a.size();i++)
        {
            string s1=a.substr(0,i+1),s2=a.substr(0,i);
            reverse(s2.begin(),s2.end());
            s1+=s2;
            if(s1.find(b)!=-1)
            {
                flag=1;
                break;
            }
        }
        puts(flag ? "YES" : "NO");
}

//QUESTION LINK : https://codeforces.com/contest/1553/problem/B
int main(){
    Priyansh
    ll t = 1;
    cin>>t;
    
    while(t--){
        solve();
 
    }
}