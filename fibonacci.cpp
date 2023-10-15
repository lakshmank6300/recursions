#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n,int a=0,int b=1){
    if(n==0)
    return;
    cout<<a<<" ";
    fibonacci(n-1,a+b,a);
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
}