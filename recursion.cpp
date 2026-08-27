#include<bits/stdc++.h>
using namespace std;

//print name N times
void print1(int n){
    if(n==0) return;
    cout << "Sovan Ghosh" << endl;
    print1(n-1);
}
//print linearly from 1 to N
void print2(int i,int n){
    if(i>n) return;
    cout << i << endl;
    print2(i+1,n);
}
//print in terms of N to 1
void print3(int i,int n){
    if(i<1) return;
    cout << i << endl;
    print3(i-1,n);
}
//print linearly from 1 to N (But using backtrack)
void print4(int i,int n){
    if(i<1) return;
    print4(i-1,n);
    cout << i << endl;
}
//print from N to 1 (By Backtrack)
void print5(int i,int n){
    if(i>n) return;
    print5(i+1,n);
    cout << i << endl;
}
int main(){
    int n;
    cin >> n;
    print5(1,n);
    return 0;
}