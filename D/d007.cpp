#include <bits/stdc++.h>
using namespace std;

int n,P,a[30]={};
int mx;

void recursion(int i,int sum){
    if(i==n){
        if(sum<=P){
            mx=max(mx,sum);
        }
        return;
    }
    recursion(i+1,sum+a[i]);
    recursion(i+1,sum);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> P;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    mx=0;
    recursion(0,0);
    cout << mx << "\n";
}
