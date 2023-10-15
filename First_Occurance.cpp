#include<bits/stdc++.h>
using namespace std;
int First_Occur(int *arr,int n,int k){
    if(n==0)
        return -1;
    if(arr[0]==k)
        return 0;
    int sub=First_Occur(arr+1,n-1,k);
    if(sub==-1)
        return -1;
    else
        return sub+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    int ans=First_Occur(arr,n,key);
    if(ans==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at "<<ans;
}