#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i =0;i<n;i++){
        int min = i;
        for(int j  = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void pirntArray(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {64, 25, 12, 22, 11};
    cout<<"Original Array : ";
    pirntArray(arr);
    selectionSort(arr);
    cout<<"Sorted Array : ";
    pirntArray(arr);
    return 0;
}



//Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element.