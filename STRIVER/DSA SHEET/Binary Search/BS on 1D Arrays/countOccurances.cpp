#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int first(int arr[],int len, int target){
    int start = 0;
    int end = len - 1,ans = -1;
    while (start <= end) {
        int mid = (start + ((end-start)/2));
        if (arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int last(int arr[],int len, int target){
    int start = 0;
    int end = len - 1,ans = -1;
    while (start <= end) {
        int mid = (start + ((end-start)/2));
        if (arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0;i< len;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int firstocc = first(arr,len,target);
    int lastocc = last(arr,len,target);
    if(firstocc == -1 && lastocc == -1){
        cout << "No\n";
    }
    else{
        cout<<lastocc-firstocc+1<<endl;
    }
    return 0;
}
