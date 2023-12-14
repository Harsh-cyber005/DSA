#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int pivot(int arr[],int len){
    int start = 0,end = len-1,mid;
    while(start < end){
        mid = start + (end-start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return mid;
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0;i< len;i++){
        cin >> arr[i];
    }
    int p = pivot(arr,len);
    cout << arr[p] <<endl;
    return 0;
}
