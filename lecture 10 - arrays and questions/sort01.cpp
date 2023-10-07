#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array : ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0,j = n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}
