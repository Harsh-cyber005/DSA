#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isPossible(int arr[],int len,int sep,int cows){
    cows--;
    int initial = 0;
    for(int i = 1;i<len;i++){
        if(cows == 0){
            return true;
        }
        if(arr[i]-arr[initial] < sep){
            continue;
        }
        else{
            initial = i;
            cows--;
        }
    }
    if(cows == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int len;
    cout << "Enter the length of the array : ";
    cin >> len;
    int arr[len];
    cout << "Enter the Array : ";
    for(int i = 0;i<len;i++){
        cin >> arr[i];
    }
    int cows,ans = 0;
    cout << "Enter the number of cows : ";
    cin >> cows;
    sort(arr,arr+len);
    int start = 1, end = arr[len-1] - arr[0],mid;
    while(start <= end){
        mid = start + (end-start)/2;
        if(isPossible(arr,len,mid,cows)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << ans <<endl;
    return 0;
}
