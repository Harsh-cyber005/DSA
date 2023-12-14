#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int floor(int arr[],int len, int target){
    int start = 0;
    int end = len - 1,ans;
    while (start <= end) {
        int mid = (start + ((end-start)/2));
        if (arr[mid] <= target){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int ceil(int arr[],int len, int target){
    int start = 0;
    int end = len - 1,ans;
    while (start <= end) {
        int mid = (start + ((end-start)/2));
        if (arr[mid] >= target){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0;i< len;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int low = floor(arr,len,target);
    int high = ceil(arr,len,target);
    cout<<arr[low]<<" ";
    cout<<arr[high]<<endl;
    return 0;
}
