#include<bits/stdc++.h>
using namespace std;
void moveZero(int arr[],int n){
    int i = 0;
    int j =0;
    while(i<n){
         //cout<< i<<" "<<endl;
        if(arr[i] !=0){
            //cout<< arr[i]<<","<<arr[i-1]<<" "<<endl;
            swap(arr[i],arr[j]);
            j++;
        }
         i++;
            //cout<< i<<" "<<endl;
    }
}
void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[] = {0 , 3, 5, 0, 0,1,0};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    moveZero(arr,n);
    printArray(arr,n);
    return 0;
}