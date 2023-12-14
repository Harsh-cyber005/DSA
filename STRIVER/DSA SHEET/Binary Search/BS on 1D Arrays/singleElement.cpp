#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int singleElement(int arr[], int len)
{
    if (len == 1)
    {
        return 0;
    }
    else if (arr[0] != arr[1])
    {
        return 0;
    }
    else if (arr[len - 1] != arr[len - 2])
    {
        return len - 1;
    }
    int start = 1, end = len - 2, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            return mid;
        }
        else if (mid % 2 == 1 && arr[mid] == arr[mid - 1])
        {
            start = mid + 1;
        }
        else if (mid % 2 == 0 && arr[mid] == arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int x = singleElement(arr, len);
    if(x == -1){
        cout << "No Single Element"<<endl;
    }
    else{
        cout << "The Single Element is: "<<arr[x]<<endl;
    }
    return 0;
}
