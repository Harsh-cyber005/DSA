#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n,m;
    cout << "Enter length of first array : ";
    cin >> n;
    int arr1[n];
    cout << "Enter first Array : ";
    for (int i=0;i<n;i++){
        cin >> arr1[i];
    }
    cout << "Enter length of second array : ";
    cin >> m;
    int arr2[m];
    cout << "Enter second Array : ";
    for (int i=0;i<m;i++){
        cin >> arr2[i];
    }
    int i = 0,j = 0;
    while (i<n && j<m)
    {
        if(arr1[i] == arr2[j]){
            cout << arr1[i] <<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
    return 0;
}
