#include<bits/stdc++.h>
using namespace std;

void merge(int low,int mid,int high,int arr[]){
    int i=low;
    int j=mid+1;
    // vector<int> temp;
    int k=0,temp[high-low+1];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            // temp.emplace_back(arr[i]);
            temp[k]=arr[i];
            i++;
        }
        else{
            // temp.emplace_back(arr[j]);
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=high){
            // temp.emplace_back(arr[j]);
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            // temp.emplace_back(arr[i]);
            temp[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int i=low;i<=high;i++){
        // arr[i]=temp[i-low];
        arr[i]=temp[i-low];
    }
}
void merge_sort(int low, int high, int arr[]){
    if(low<high){
        int mid=(low+high)/2;
        merge_sort(low,mid,arr);
        merge_sort(mid+1,high,arr);
        merge(low,mid,high,arr);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    merge_sort(0,n-1,arr);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}