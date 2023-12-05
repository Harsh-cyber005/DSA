#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int mountainArray(int arr[], int len){
    int start = 0, end = len-1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}

int main()
{
    int len;
    cout << "Enter Length of Array : ";
    cin >> len;
    int array[len];
    cout << "Enter the Array : ";
    for(int i = 0;i<len;i++){
        cin >> array[i];
    }
    int max = mountainArray(array,len);
    cout << "Max element : "<<array[max]<<"\n";

    return 0;
}
