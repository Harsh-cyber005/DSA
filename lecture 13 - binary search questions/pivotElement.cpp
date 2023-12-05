#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    int len;
    cout << "Enter Length of Array : ";
    cin >> len;
    int array[len],sum=0;
    cout << "Enter the Array : ";
    for(int i = 0;i<len;i++){
        cin >> array[i];
        sum += array[i];
    }
    int lsum = 0, rsum = 0;
    for(int i = 1;i<len;i++){
        lsum += array[i-1];
        rsum = sum - lsum - array[i];
        if(lsum == rsum){
            cout << "Pivot Element is "<<array[i]<<" at index "<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
