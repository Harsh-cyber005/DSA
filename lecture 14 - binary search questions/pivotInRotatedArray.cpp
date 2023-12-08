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

int main()
{
    int arr[6] = {8,10,14,18,1,3};
    int pivot = pivotElement(arr,6);
    cout<<pivot<<endl;
    return 0;
}
