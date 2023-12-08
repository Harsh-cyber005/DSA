#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int pivotElement(int arr[],int len){
    int s = 0;
    int e = len-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return mid;
}

int binarySearch(int arr[],int s, int e,int target){
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<=target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e - s) / 2;
    }
    return -1; 
}

int main()
{
    int arr[6] = {8,10,14,18,1,3};
    int target = 14;
    int pivot = pivotElement(arr,6);
    if(target <= arr[5] && target >= arr[pivot]){
        cout<<binarySearch(arr,pivot,5,target);
    }
    else{
        cout<<binarySearch(arr,0,pivot-1,target);
    }
    return 0;
}
