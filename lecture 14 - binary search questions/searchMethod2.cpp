#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int arr[14] = {10,11,12,13,14,1,2,3,4,5,6,7,8,9};
    int target = 17;
    int low = 0, high = 13;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            cout << "Found at : " << mid << "\n";
            return 0;
        }
        if(arr[mid] <= arr[high]){
            if(target >= arr[mid] && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        else{
            if(target >= arr[low] && target <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    cout << "Element not found\n";
    return 0;
}