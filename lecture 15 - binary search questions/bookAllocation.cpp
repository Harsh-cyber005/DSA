#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


//STRIVERS SOLUTION --- BEST I'VE WATCHED

int countStudents(int arr[],int len,int barrier){
    int students = 1, sum = 0;
    for(int i=0;i<len;i++){
        if((sum + arr[i]) <= barrier){
            sum += arr[i];
        }
        else{
            students++;
            sum = arr[i];
        }
    }
    return students;
}

int main()
{
    int len,sum = 0;
    cout << "Enter length of the array : ";
    cin >> len;
    int arr[len];
    cout << "Enter the Array : ";
    for(int i = 0;i<len;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int students;
    cout << "Enter the number of students : ";
    cin >> students;
    if(students > len){
        cout << "Invalid number of students";
        return 0;
    }
    int start = 0;
    int end = sum,mid,ans;
    while(start <= end){
        mid = start + (end - start)/2;
        if(countStudents(arr,len,mid)==students){
            ans = mid;
            end = mid - 1;
        }
        else if(countStudents(arr,len,mid)>students){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << "Answer : "<<ans<<endl;
    return 0;
}
