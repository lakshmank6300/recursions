#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int *arr,int n){
    if(n==1)
    return 1;
    else if(arr[0]<=arr[1])
    return is_sorted(arr+1,n-1);
    else
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(is_sorted(arr,n))
        cout<<"Array is sorted";
    else
    cout<<"Array is unsorted";
}