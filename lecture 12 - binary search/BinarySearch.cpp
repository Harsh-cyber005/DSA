#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n,key;
    cout << "Enter the length of the array : ";
    cin >> n;
    int arr[n];
    cout<<"Enter the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin >> key;
    sort(arr,arr+n);
    int l=0,r=n-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid] == key){
            cout << "Found\n";
            return 0;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout << "Not Found\n";
    return 0;
}
