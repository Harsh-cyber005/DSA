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
    for (int i=0;i<n;i++)
    {
        int element = arr1[i];
        for (int j=0;j<m;j++){
            if(element < arr2[j]){
                break;
            }
            if(element == arr2[j]){
                cout<<element<<" ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return 0;
}
