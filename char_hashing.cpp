#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a'] +=1;
    }

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        char ch;
        cin >> ch;
        cout << hash[ch-'a'] << endl;
    }
    return 0;
}