#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n,o=0,e=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {cin>>a[i]; (a[i]%2==0)? e++:o++;}
    if(e==o) cout<<n;
    else{
    o=(o<e)? o:e;
    cout<<(o*2)+1;
return 0;
}