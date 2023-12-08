#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int x;
    cin >> x;
    int s = 1, e = x, m = s + (e - s) / 2;
    ll ans = -1;
    while(s<=e){
        ll square = m*m;
        if(square == x){
            ans = m;
            break;
        }
        else if(square>x){
            e=m-1;
        }
        else{
            s=m+1;
            ans = m;
        }
        m = s+(e-s)/2;
    }
    cout << ans <<"\n";
    return 0;
}
