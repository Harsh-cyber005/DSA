#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n,s,l,r,sum;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array : ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter Sum : ";
    cin >> s;
    for(int i=0;i<n;i++){
        if(i>0){
            if(arr[i-1] == arr[i]){
                continue;
            }
        }
        if(arr[i+1] > s){
            break;
        }
        l = i+1;
        r = n-1;
        while(l<r){
            sum = arr[i] + arr[l] + arr[r];
            if(sum == s){
                cout <<"["<<arr[i]<<", "<<arr[l]<<", "<<arr[r]<<"]";
                l = l+1;
                r = r-1;
                while(arr[l-1] == arr[l]){
                    l++;
                }
                while(arr[r+1] == arr[r]){
                    r--;
                }
            }
            else if(sum < s){
                l = l+1;
                while(arr[l-1] == arr[l]){
                    l++;
                }
            }
            else{
                r = r-1;
                while(arr[r+1] == arr[r]){
                    r--;
                }
            }
        }
    }
    return 0;
}
