#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int peakElement(int arr[],int len){
    int start=0,end=len-1,mid;
    while(start <= end){
        mid = start + (end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1]){
            end = mid - 1;
        }
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
    int peak = peakElement(arr,len);
    if(peak == -1){
        if(arr[0] < arr[1]){
            cout << "Peak Element is: "<<arr[len-1]<<endl;
        }
        else if(arr[0] > arr[1]){
            cout << "Peak Element is: "<<arr[0]<<endl;
        }
        else{
            cout << "No Peaks"<<endl;
        }
    }
    else {
        cout << "Peak Element is: "<<arr[peak]<<endl;
    }
    return 0;
}
