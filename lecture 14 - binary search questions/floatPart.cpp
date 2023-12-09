#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


// NOT COMPLETED YET

int integerPart(int n){
    int s = 1, e = n, m = s + (e - s) / 2;
    ll ans = -1;
    while(s<=e){
        ll square = m*m;
        if(square == n){
            ans = m;
            break;
        }
        else if(square>n){
            e=m-1;
        }
        else{
            s=m+1;
            ans = m;
        }
        m = s+(e-s)/2;
    }
    return ans;
}

double floatPart(int n, int precision, int temp){
    double factor = 0.1,ans = temp;
    double start = temp, end = start + 1,mid;
    int rfactor = 10;
    for(int i = 1;i<=precision;i++){
        while(start<=end){
            mid = start + (end - start)/2;
            mid = floor(mid*rfactor)/rfactor;
            double square = mid*mid;
            cout<<"before"<<endl;
            cout<<factor<<" "<<rfactor<<" "<<start<<" "<<end<<" "<<mid<<" "<<square<<"\n";
            if(square == double(n)){
                return mid;
            }
            else if(square>double(n)){
                end = mid-factor;
            }
            else{
                ans = mid;
                start = mid+factor;
            }
            cout<<"after"<<endl;
            cout<<factor<<" "<<rfactor<<" "<<start<<" "<<end<<" "<<mid<<" "<<square<<"\n";
        }
        factor = factor/10;
        rfactor = rfactor*10;
        start = ans;
        end = start + factor*10;
    }
    return ans;
}

int main()
{
    int n,precision;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Enter the precision : ";
    cin >> precision;
    int intPart = integerPart(n);
    double ans = floatPart(n,precision,intPart);
    cout<<"ANS : "<<ans<<setprecision(precision)<<"\n";
    return 0;
}
