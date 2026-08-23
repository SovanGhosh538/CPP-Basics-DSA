#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age<18) cout << "not eligible for job";
    else {
        cout << "eligible for job";
        if(age>=55 && age<=57) cout <<"\neligible for job, but retirement soon.";
        else if(age>57) cout << "\nRetirement time "; 
    }
    return 0;
}