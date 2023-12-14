#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int Binary_Search(int arr[],int len,int target){
    int start = 0;
    int end = len - 1;
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
    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int len = 8, target = 6;
    int fountAt = Binary_Search(arr,len,target);
    cout<<fountAt<<endl;
    return 0;
}
