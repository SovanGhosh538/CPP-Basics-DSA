#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
//Bubble sorting
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                flag=1;
                swap(arr[j+1],arr[j]);
            }
        }
        if(flag==0)
            break;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}