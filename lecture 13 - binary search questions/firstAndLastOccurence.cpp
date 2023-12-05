#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int firstOccurance(int arr[], int len, int target)
{
    int start = 0, end = len - 1, ans;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int len, int target)
{
    int start = 0, end = len - 1, ans;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end-start) / 2;
    }
    return ans;
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
    int target;
    cout << "Enter the Element to find : ";
    cin >> target;
    int first=-1, last=-1;
    first = firstOccurance(array,len,target);
    last = lastOccurance(array,len,target);
    cout << "First Occurance of "<<target<<" is at : "<<first<<"\n";
    cout << "Last Occurance of "<<target<<" is at : "<<last<<"\n";
    return 0;
}
