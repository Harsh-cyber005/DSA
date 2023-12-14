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

int search(int arr[],int s,int e,int target){
    int start = s;
    int end = e;
    while (start <= end) {
        int mid = start + (end-start)/2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
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
    int p = pivot(arr,len);
    if(arr[0] <= target && target <= arr[p]){
        cout << (search(arr,0,p-1,target) == -1 ? "false" : "true" ) <<endl;
    }
    else{
        cout << (search(arr,p,len-1,target) == -1 ? "false" : "true" ) <<endl;
    }
    return 0;
}
