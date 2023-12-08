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
    for(int i = 1;i<=precision;i++){
        while(start<=end){
            mid = start + (end - start)/2;
            double square = mid*mid;
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
        }
        factor = factor/10;
        start = ans;
        end = start + factor*10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int intPart = integerPart(n);
    double ans = floatPart(n,5,intPart);
    cout<<"ANS : "<<ans<<"\n";
    return 0;
}
