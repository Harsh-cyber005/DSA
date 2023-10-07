#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int n,s;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array : ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter Sum : ";
    cin >> s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                cout<<"["<<min(arr[i],arr[j]);
                cout<<","<<max(arr[i],arr[j])<<"]\n";
            }
        }
    }
    return 0;
}
