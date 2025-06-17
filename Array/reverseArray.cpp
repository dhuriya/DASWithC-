#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n){
    int s =0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {11,7,3,12,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr,n);
    printArray(arr,n);
    return 0;
}