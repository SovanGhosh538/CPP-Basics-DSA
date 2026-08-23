#include<bits/stdc++.h>
using namespace std;
/* grading system for a school */
int main(){
    int marks;
    cin >> marks;
    if(marks<25) cout << "F";
    else if(marks<45) cout << "E";
    else if(marks<50) cout << "D";
    else if(marks<60) cout << "C";
    else if(marks<80) cout << "B";
    else cout << "A";
    return 0;
}