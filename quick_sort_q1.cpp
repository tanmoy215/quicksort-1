#include<iostream>
using namespace std;
int main(){
    int arr[]={3, 8, 6, 7, 5, 9, 10};
    int  n = sizeof(arr)/sizeof(int);
    int idx=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            idx=i;
            break;
        }
    }
   int count = 0;
   for(int i=0;i<n;i++){
    if(i==idx) continue;
    if(arr[idx]>arr[i]) count++;
   }
   int f_idx = count;
   swap(arr[f_idx],arr[idx]);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}