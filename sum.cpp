#include<bits/stdc++.h>
using namespace std;


int sum(int i){
    if(i==1) return 1;
    return (sum(i-1)+i);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}