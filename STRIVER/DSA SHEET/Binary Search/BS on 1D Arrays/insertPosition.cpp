#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int lowerBound(int arr[],int len, int target){
    int start = 0;
    int end = len - 1,ans;
    while (start <= end) {
        int mid = (start + ((end-start)/2));
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target && arr[mid-1] < target){
            return mid;
        }
        else if(arr[mid] > target){
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
    int low = lowerBound(arr,len,target);
    cout<<low<<endl;
    return 0;
}
