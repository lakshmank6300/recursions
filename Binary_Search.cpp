#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int *arr,int k,int h,int l=0){
    if(l>h)
    return -1;
    int m=(l+h)>>1;
    if(arr[m]==k)   return m;
    else if(k<arr[m])   h=m-1;
    else    l=m+1;
    return Binary_Search(arr,k,h,l);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    int ans=Binary_Search(arr,key,n-1);
    if(ans==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at "<<ans;
}